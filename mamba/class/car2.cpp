#include <iostream>

class Car {
public:
    int car_id;
    char colour[4];
    float engine_no;
    double distance = 12;
    float used_petr;

    void distance_travelled() {
        // Define the function or remove it if not needed
    }

    float petrol_used(float litres) {
        //1 litre is 120ksh 
        litres = 12;
        used_petr = litres * distance;
        return used_petr;
    }

    char music_played() {
        // Define the function or remove it if not needed
        return ' ';
    }

    void display(int a, int b) {
        std::cout << "car id is=\t" << a <<std::endl << "distance travelled =\t" << b + 5<<std::endl<<"petrol used=\t"<< used_petr;
    }
};

int main() {
    Car cl; // cl is the object
    cl.car_id = 321;
    cl.petrol_used(12); // Call the petrol_used function
    cl.display (cl.car_id, cl.distance);
    return 0;
}