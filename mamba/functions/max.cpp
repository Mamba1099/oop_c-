#include <iostream>
using namespace std;
int max; // global variable

int main() {
    int a = 100;
    int b = 200;
    int ret;

    ret = std::max(a, b);
    cout << "Max value is : " << ret << endl;
    return 0;
}
