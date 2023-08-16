#pragma once
#include <string>

class Car {
public:
    Car(const std::string& name, int year, float price);

    std::string getName() const;
    int getYear() const;
    float getPrice() const;

private:
    std::string name;
    int year;
    float price;
};