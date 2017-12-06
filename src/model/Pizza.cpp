#include "Pizza.h"

Pizza::Pizza(string name, string topping, int price) {
    this->name = name;
    this->topping = topping;
    this->price = price;
}

string Pizza::getName() const{
    return name;
}

string Pizza::getTopping() const{
    return topping;
}

int Pizza::getPrice() const{
    return price;
}

void Pizza::setName(string name) {
    this->name = name;
}

void Pizza::setTopping(string topping) {
    this->topping = topping;
}

void Pizza::setPrice(int price) {
    this->price = price;
}
