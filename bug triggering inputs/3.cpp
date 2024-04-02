/*
Reject valid on clang 17.0.1
Confirmed
*/
template<class T>
class confused{};

template<class T>
class test
{
    void foo() {
        if(this->b.confused < 1);
    };

    struct bar
    {
        int confused;
    } b;
};