// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// collectorGuess
std::string collectorGuess(CharacterVector input, List locale_);
RcppExport SEXP readr_collectorGuess(SEXP inputSEXP, SEXP locale_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    __result = Rcpp::wrap(collectorGuess(input, locale_));
    return __result;
END_RCPP
}
// read_connection_
RawVector read_connection_(RObject con, int chunk_size);
RcppExport SEXP readr_read_connection_(SEXP conSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< int >::type chunk_size(chunk_sizeSEXP);
    __result = Rcpp::wrap(read_connection_(con, chunk_size));
    return __result;
END_RCPP
}
// utctime
NumericVector utctime(IntegerVector year, IntegerVector month, IntegerVector day, IntegerVector hour, IntegerVector min, IntegerVector sec, NumericVector psec);
RcppExport SEXP readr_utctime(SEXP yearSEXP, SEXP monthSEXP, SEXP daySEXP, SEXP hourSEXP, SEXP minSEXP, SEXP secSEXP, SEXP psecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type year(yearSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type month(monthSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type day(daySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type hour(hourSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sec(secSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type psec(psecSEXP);
    __result = Rcpp::wrap(utctime(year, month, day, hour, min, sec, psec));
    return __result;
END_RCPP
}
// dim_tokens_
IntegerVector dim_tokens_(List sourceSpec, List tokenizerSpec);
RcppExport SEXP readr_dim_tokens_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    __result = Rcpp::wrap(dim_tokens_(sourceSpec, tokenizerSpec));
    return __result;
END_RCPP
}
// count_fields_
std::vector<int> count_fields_(List sourceSpec, List tokenizerSpec, int n_max);
RcppExport SEXP readr_count_fields_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    __result = Rcpp::wrap(count_fields_(sourceSpec, tokenizerSpec, n_max));
    return __result;
END_RCPP
}
// guess_header_
RObject guess_header_(List sourceSpec, List tokenizerSpec, List locale_);
RcppExport SEXP readr_guess_header_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP locale_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    __result = Rcpp::wrap(guess_header_(sourceSpec, tokenizerSpec, locale_));
    return __result;
END_RCPP
}
// tokenize_
RObject tokenize_(List sourceSpec, List tokenizerSpec, int n_max);
RcppExport SEXP readr_tokenize_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    __result = Rcpp::wrap(tokenize_(sourceSpec, tokenizerSpec, n_max));
    return __result;
END_RCPP
}
// parse_vector_
SEXP parse_vector_(CharacterVector x, List collectorSpec, List locale_, const std::vector<std::string>& na);
RcppExport SEXP readr_parse_vector_(SEXP xSEXP, SEXP collectorSpecSEXP, SEXP locale_SEXP, SEXP naSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type collectorSpec(collectorSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type na(naSEXP);
    __result = Rcpp::wrap(parse_vector_(x, collectorSpec, locale_, na));
    return __result;
END_RCPP
}
// read_file_
CharacterVector read_file_(List sourceSpec, List locale_);
RcppExport SEXP readr_read_file_(SEXP sourceSpecSEXP, SEXP locale_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    __result = Rcpp::wrap(read_file_(sourceSpec, locale_));
    return __result;
END_RCPP
}
// read_lines_
CharacterVector read_lines_(List sourceSpec, List locale_, int n_max, bool progress);
RcppExport SEXP readr_read_lines_(SEXP sourceSpecSEXP, SEXP locale_SEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    __result = Rcpp::wrap(read_lines_(sourceSpec, locale_, n_max, progress));
    return __result;
END_RCPP
}
// read_lines_raw_
List read_lines_raw_(List sourceSpec, int n_max, bool progress);
RcppExport SEXP readr_read_lines_raw_(SEXP sourceSpecSEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    __result = Rcpp::wrap(read_lines_raw_(sourceSpec, n_max, progress));
    return __result;
END_RCPP
}
// read_tokens_
RObject read_tokens_(List sourceSpec, List tokenizerSpec, ListOf<List> colSpecs, CharacterVector colNames, List locale_, int n_max, bool progress);
RcppExport SEXP readr_read_tokens_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP colSpecsSEXP, SEXP colNamesSEXP, SEXP locale_SEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type colSpecs(colSpecsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    __result = Rcpp::wrap(read_tokens_(sourceSpec, tokenizerSpec, colSpecs, colNames, locale_, n_max, progress));
    return __result;
END_RCPP
}
// guess_types_
std::vector<std::string> guess_types_(List sourceSpec, List tokenizerSpec, Rcpp::List locale_, int n);
RcppExport SEXP readr_guess_types_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP locale_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(guess_types_(sourceSpec, tokenizerSpec, locale_, n));
    return __result;
END_RCPP
}
// whitespaceColumns
List whitespaceColumns(List sourceSpec, int n);
RcppExport SEXP readr_whitespaceColumns(SEXP sourceSpecSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(whitespaceColumns(sourceSpec, n));
    return __result;
END_RCPP
}
// type_convert_col
RObject type_convert_col(CharacterVector x, List spec, List locale_, int col, const std::vector<std::string>& na, bool trim_ws);
RcppExport SEXP readr_type_convert_col(SEXP xSEXP, SEXP specSEXP, SEXP locale_SEXP, SEXP colSEXP, SEXP naSEXP, SEXP trim_wsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type spec(specSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type na(naSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    __result = Rcpp::wrap(type_convert_col(x, spec, locale_, col, na, trim_ws));
    return __result;
END_RCPP
}
// stream_delim
std::string stream_delim(const List& df, const std::string& path, char delim, const std::string& na, bool col_names, bool append);
RcppExport SEXP readr_stream_delim(SEXP dfSEXP, SEXP pathSEXP, SEXP delimSEXP, SEXP naSEXP, SEXP col_namesSEXP, SEXP appendSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type na(naSEXP);
    Rcpp::traits::input_parameter< bool >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type append(appendSEXP);
    __result = Rcpp::wrap(stream_delim(df, path, delim, na, col_names, append));
    return __result;
END_RCPP
}
