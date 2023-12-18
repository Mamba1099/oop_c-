// User Develop main function such that the sides and area of your square are shown when the program is executed.

#include <iostream>
#include <cmath>

class Square {
    public:
        double side;
        double area;
        double CalculateArea() {
            area = pow(side, 2);
            return area;
        }
        void displayArea() {
            std::cout << "side: " << side << "metres" <<std::endl;
            std::cout << "Area of the square is: " << CalculateArea() << "metres squared" << std::endl;
        }
};
int main() {
    Square sq;
    sq.side = 5;
    sq.displayArea();
    return 0;

}