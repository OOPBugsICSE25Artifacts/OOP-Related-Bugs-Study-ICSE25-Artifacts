/*
Accept invalid on clang 17.0.1
Confirmed
*/
template < class T, class V > struct A
{
    A ();
    A (A &);
    A (A < V,T >);
};

void f () 
{
    A <int, int> (A < int, int >());
}