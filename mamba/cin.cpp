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
void my_pointer() {
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    // cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    // cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    //output the value of food with the pointer (Pizza)
    // Pizza
    // 0x7ffe4e3a3340
    // 0x7ffe4e3a3340
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";
    // Change the value of the pointer
    *ptr = "Hamburger";
    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";
    cout << &food<< "\n";


}
int main() {
    // my_number();
    // my_logic();
    my_pointer();
    return 0;
} 
