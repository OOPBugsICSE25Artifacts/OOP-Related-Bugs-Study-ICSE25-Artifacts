/*
Reject valid on clang 17.0.1
*/
struct Base {
protected:
    ~Base() = default;  
};

struct Derived : Base{
};

int main(){
    Derived d{};
}