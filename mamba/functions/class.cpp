#include <iostream>
using namespace std;
// override function using a pointer
class Base{
    public:
    void print() {
        std::cout << "Base function" << std::endl;
    }
};

class Derived:public Base {
    public:
    void print () {
        std::cout << "Derived function" << std::endl;
    }
};

int main () {
    Derived derived1;
    // pointer of Base type that points to derived1
    Base *ptr = &derived1;
    ptr->print();

    return 0;

}
