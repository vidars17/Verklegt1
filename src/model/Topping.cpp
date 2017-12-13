#include "Topping.h"
#include <strings.h>


using namespace std;

Topping::Topping() {
    this->name = getName();
    this->price = getPrice();
}

string Topping::getName() const{
    return this->name;
}

int Topping::getPrice() const{
    return this->price;
}

void Topping::setName() {
    string name;
    cin >> name;
    this->name = name;
}

void Topping::setPrice() {
    int price;
    cin >> price;
    this->price = price;
}

istream& operator >>(istream& in, Topping& topping) {
    cout << "Name topping: " << endl;
    in >> topping.name;
    cout << "Price: " << endl;
    in >> topping.price;
    return in;
}

ostream& operator <<(ostream& out, Topping& topping) {
    out << topping.getName() << ", " << topping.getPrice() << endl;
    return out;
}
