#include <iostream>
using namespace std;

void max() {
    int num1 = 100;
    int num2 = 200;
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    } 
    cout << "Max value is : " << result << endl; 
}


int main() {
    max();
    return 0;
}
