#ifndef FASTREAD_ReadConnectionSource_H
#define FASTREAD_ReadConnectionSource_H

namespace fastread {
        
    template < template <class> class LinePolicy = KeepAllLines >
    class ReadConnectionSource : public Source<ReadConnectionSource<LinePolicy>, LinePolicy>{
    public:
        typedef Source<ReadConnectionSource, LinePolicy> Base ;
        typedef LinePolicy<Base> Policy ;
        
        enum Origin {
            START = 1, 
            CURRENT = 2, 
            END = 3
        } ;
        
        enum ReadWrite {
            READ = 1, 
            WRITE = 2
        } ;
        
        ReadConnectionSource(SEXP id, LinePolicy<Base> line_policy_ = LinePolicy<Base>(), char sep = ',', char quote = '"', char esc = '\\' ) : 
            Base(sep, quote, esc, line_policy_), 
            con(getConnection(as<int>(id))), 
            chunk_size(10000), 
            buffer(chunk_size, '\0' ), 
            data(&buffer[0]), n(0)
        {
            Base::p = Base::end = last_full_line = data ;
        }
        
        bool ensure_full_line(){
            if( Base::p == Base::end && more() ) return true ;
            if( Base::p > last_full_line && more() ) return true ;    
            return Base::p < last_full_line ;
        }
        bool more() {
            int nchars = n-(Base::p-data) ;
            std::memmove(data, Base::p, nchars) ;
            n = con->read(data + nchars, 1, chunk_size - nchars, con);
            bool done = n == 0;  
            n = n + nchars ;
            
            find_last_line() ;
            return !done ;
        }
        bool can_seek() const {
            return con->canseek ;
        }
        
        double byte_offset(Origin origin = START) const {
            return con->seek(con, NA_REAL, origin, READ) ;
        }
        
        void seek(double pos, Origin origin = START) {
            con->seek(con, pos, origin, READ) ;
            n = 0 ;
            Base::p = Base::end = last_full_line = data ;
        }
        
    private:
        Rconnection con ;
        
        void find_last_line(){
            Base::set(data, data + n) ;
            last_full_line = data + n - 1 ;
            while( *last_full_line != '\n' ) --last_full_line;
        }
        
        int chunk_size ;
        std::vector<char> buffer ;
        char* data ;
        char* last_full_line ;
        int n ;
        
    } ;
}

#endif