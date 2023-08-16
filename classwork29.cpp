// classwork29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Car.h"
using namespace std;

int main() {
    std::vector<Car> cars = {
        {"Car1", 2022, 45000.0},
        {"Car2", 2021, 42000.0},
        {"Car3", 2020, 29000.0},
       
    };

    auto minMaxCars = std::minmax_element(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {
        return car1.getPrice() < car2.getPrice();
        });

    std::cout << "Car with minimum price: " << minMaxCars.first->getName() << " (" << minMaxCars.first->getPrice() << ")" << endl;
    std::cout << "Car with maximum price: " << minMaxCars.second->getName() << " (" << minMaxCars.second->getPrice() << ")" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
