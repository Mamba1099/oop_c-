#include <iostream>
using namespace std;

int result;
int sum(int a, int b=20) {
    result = a + b;
    return result;
}

int main() {
    int a = 100;
    int b = 200;

    result = sum(a, b);
    std::cout << "Total value is : " << result << std::endl;

    result = sum(a);
    std::cout << "Total value is : " << result << std::endl;

    return 0;
}