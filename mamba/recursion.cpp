// making a function call itself

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1); // recursive call
    } else {
        return 1;
    }
}
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1); // recursive call
  } else {
    return 0;
  }
}

int main() {
  int result1 = sum(10);
    int result2 = factorial(5);
  cout << result1 << endl;
  cout << result2 << endl;  
  return 0;
} 