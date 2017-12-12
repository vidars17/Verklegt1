#include "Topping.h"
#include <strings.h>
#include <fstream>

using namespace std;

Topping::Topping(string name, int price){
    this->name = name;
    this->price = price;
}

string Topping::getName() const{
    return this->name;
}

int Topping::getPrice() const{
    return this->price;
}
