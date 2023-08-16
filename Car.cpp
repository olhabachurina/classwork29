#include "Car.h"
Car::Car(const std::string& name, int year, float price)
    : name(name), year(year), price(price) {}

std::string Car::getName() const {
    return name;
}

int Car::getYear() const {
    return year;
}

float Car::getPrice() const {
    return price;
}