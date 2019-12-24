// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// format_cookies
Rcpp::CharacterVector format_cookies(Rcpp::ListOf<Rcpp::List> cookies);
RcppExport SEXP _RestRserve_format_cookies(SEXP cookiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::ListOf<Rcpp::List> >::type cookies(cookiesSEXP);
    rcpp_result_gen = Rcpp::wrap(format_cookies(cookies));
    return rcpp_result_gen;
END_RCPP
}
// format_headers
Rcpp::CharacterVector format_headers(Rcpp::ListOf<Rcpp::CharacterVector> x);
RcppExport SEXP _RestRserve_format_headers(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::ListOf<Rcpp::CharacterVector> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(format_headers(x));
    return rcpp_result_gen;
END_RCPP
}
// parse_cookies
Rcpp::List parse_cookies(Rcpp::CharacterVector x);
RcppExport SEXP _RestRserve_parse_cookies(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_cookies(x));
    return rcpp_result_gen;
END_RCPP
}
// parse_headers
Rcpp::List parse_headers(const char* headers);
RcppExport SEXP _RestRserve_parse_headers(SEXP headersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const char* >::type headers(headersSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_headers(headers));
    return rcpp_result_gen;
END_RCPP
}
// parse_multipart_boundary
std::string parse_multipart_boundary(const std::string& content_type);
RcppExport SEXP _RestRserve_parse_multipart_boundary(SEXP content_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string& >::type content_type(content_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_multipart_boundary(content_type));
    return rcpp_result_gen;
END_RCPP
}
// parse_multipart_body
Rcpp::List parse_multipart_body(Rcpp::RawVector body, const char* boundary);
RcppExport SEXP _RestRserve_parse_multipart_body(SEXP bodySEXP, SEXP boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type body(bodySEXP);
    Rcpp::traits::input_parameter< const char* >::type boundary(boundarySEXP);
    rcpp_result_gen = Rcpp::wrap(parse_multipart_body(body, boundary));
    return rcpp_result_gen;
END_RCPP
}
// url_decode
Rcpp::CharacterVector url_decode(Rcpp::CharacterVector x);
RcppExport SEXP _RestRserve_url_decode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(url_decode(x));
    return rcpp_result_gen;
END_RCPP
}
// url_encode
Rcpp::CharacterVector url_encode(Rcpp::CharacterVector x);
RcppExport SEXP _RestRserve_url_encode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(url_encode(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RestRserve_format_cookies", (DL_FUNC) &_RestRserve_format_cookies, 1},
    {"_RestRserve_format_headers", (DL_FUNC) &_RestRserve_format_headers, 1},
    {"_RestRserve_parse_cookies", (DL_FUNC) &_RestRserve_parse_cookies, 1},
    {"_RestRserve_parse_headers", (DL_FUNC) &_RestRserve_parse_headers, 1},
    {"_RestRserve_parse_multipart_boundary", (DL_FUNC) &_RestRserve_parse_multipart_boundary, 1},
    {"_RestRserve_parse_multipart_body", (DL_FUNC) &_RestRserve_parse_multipart_body, 2},
    {"_RestRserve_url_decode", (DL_FUNC) &_RestRserve_url_decode, 1},
    {"_RestRserve_url_encode", (DL_FUNC) &_RestRserve_url_encode, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RestRserve(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
