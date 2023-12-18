// getting input from the user

#include <iostream>
using namespace std;

void my_number() {
    int num; // Declare the variable
    cout << "Enter a number: "; // Prompt the user
    cin >> num; // Get the input
    cout << "Your number is: " << num; // Display the input
}
void my_logic() {
    int num1;
    int num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // if (num1 > num2) {
    //     cout << "The larger number is: " << num1;
    // } else {
    //     cout << "The larger number is: " << num2;
    // }
    // return 0 if false and 1 if true
    cout << (num1 > num2)<<endl;
}
int main() {
    // my_number();
    my_logic();
    return 0;
} 
