// Using classes, write a program that captures student data. The program should prompt a user to enter a student Name, 
// Age, course and telephone number. The program should then display the details. 

#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;
    std::string course;
    std::string telephone;

    void get_data() {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name); // to get a string with spaces
        std::cout << "Enter student age: ";
        std::cin >> age;
        std::cin.ignore(); // to ignore the newline character
        std::cout << "Enter student course: ";
        std::getline(std::cin, course);
        std::cout << "Enter student telephone: ";
        std::getline(std::cin, telephone);
    }

    void display_data() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Student Age: " << age << std::endl;
        std::cout << "Student Course: " << course << std::endl;
        std::cout << "Student Telephone: " << telephone << std::endl;
    }
};

int main() {
    Student student;
    student.get_data();
    student.display_data();
    return 0;
}