#include <iostream>
using namespace std;

int num = 25; // global variable
void my_even() {
    if (num % 2 == 0) {
        std::cout <<num<<"is even" << std::endl;
    } else {
        std::cout <<num << "is odd" << std::endl;
    }
}

int main() {
    my_even();
    return 0;
}