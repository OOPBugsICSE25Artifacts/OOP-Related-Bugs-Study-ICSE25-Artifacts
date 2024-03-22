/*
Reject valid on clang 17.0.1
Controversial
*/
struct A { int i; };
struct B:A { int j; };
struct C:B { int k; static_assert((int(B::*))&C::k, ""); };