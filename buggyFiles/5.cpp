/*
Accept invalid on gcc 13.2.0
Controversial
*/
template<typename T> void f() {
  struct S { void g(int n = T::unknown){}; };
}
template void f<int>();