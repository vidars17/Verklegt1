#include "Pizza.h"

Pizza::Pizza() {
    setName();
    setTopping();
    setPrice();
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

void Pizza::setName() {
    string name;
    cin >> name;
    this->name = name;
}

void Pizza::setTopping() {
    string topping;
    cin >> topping;
    this->topping = topping;
}

void Pizza::setPrice() {
    int price;
    cin >> price;
    this->price = price;
}
