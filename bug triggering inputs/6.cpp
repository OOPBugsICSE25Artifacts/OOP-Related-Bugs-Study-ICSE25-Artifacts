/*
Accept invalid on gcc 13.2.0
Confirmed
*/
class Base
{
    virtual ~Base() = default;
};

class Derived : public Base
{
    ~Derived() override = default;
};