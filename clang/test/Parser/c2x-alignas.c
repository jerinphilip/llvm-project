// RUN: %clang_cc1 -std=c23 -fsyntax-only -verify %s
// RUN: not %clang_cc1 -std=c99 -pedantic -fsyntax-only %s 2>&1 | FileCheck -check-prefix=CHECK-EXT %s

_Alignas(int) struct c1; // expected-warning {{attribute '_Alignas' before "struct" is ignored}}
alignas(int) struct c1; // expected-warning {{attribute 'alignas' before "struct" is ignored}}
