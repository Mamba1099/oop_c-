#include <iostream>
#include <string>

using namespace std;

// Create a Car class with some attributes
class Car {
    public: // Access specifier
        void my_speed() {
            cout << "Speed: 100 km/h" << endl;
        }
        void my_distance() {
            cout << "Distance: 200 km" << endl;
        }
        void my_engine() {
            cout << "Engine: 1.6" << endl;
        }
        void my_brand() {
            cout << "Brand: Ford" << endl;
        }
        void my_model() {
            cout << "Model: Focus" << endl;
        }
        void my_year() {
            cout << "Year: 2010" << endl;
        }
};
int main () {
    Car my_car; // Create an object of Car
    my_car.my_speed();
    my_car.my_distance();
    my_car.my_engine();
    my_car.my_brand();
    my_car.my_model();
    my_car.my_year();
    return 0;
}

