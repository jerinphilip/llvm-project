// RUN: %clang_cc1 -std=c23 -fsyntax-only -verify %s

_Alignas(int) struct c1; // expected-warning {{attribute '_Alignas' before "struct" is ignored}}

// FIXME: This is meant to behave the same as _Alignas, as in C23, `alignas` is a
// keyword and `_Alignas` is an alternate spelling.
// However, `alignas` is a keyword in C++ since CXX11, and is baked into
// parsing code, will need a more holistic fix to treat it also as C23
// `alignas`. 
alignas(int) struct c2; // expected-error {{misplaced attributes; expected attributes here}}
