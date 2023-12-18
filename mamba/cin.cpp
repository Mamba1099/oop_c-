// getting input from the user

#include <iostream>
using namespace std;

void my_number() {
    int num; // Declare the variable
    cout << "Enter a number: "; // Prompt the user
    cin >> num; // Get the input
    cout << "Your number is: " << num; // Display the input
}
int main() {
    my_number();
    return 0;
} 
