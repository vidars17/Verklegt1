#include "PizzaOrder.h"

PizzaOrder::PizzaOrder() {
    Pizza pizza();
    setStatus();
    setPaid();
}

void PizzaOrder::setStatus(){
    char status;
    cin >> status;
    this->status = status;
}

void PizzaOrder::setPaid() {
    this->paid = true;
}

char PizzaOrder::getStatus() {
    return this->status;
}

void PizzaOrder::getPaid() {
    if(this->paid) {
        cout << "Pizza has been paid.";
    }
    cout << "Pizza has not been paid.";
}

istream& operator >> (istream& in, PizzaOrder& pizzaOrder){
    int toppingCount;
    in >> toppingCount;
    pizza.initialize(toppingCount);
    Topping topping;
    for(int i = 0; i < pizza.toppingCount; i++){
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;
}
ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza with " << pizza.toppingCount << " toppings: " << endl;

    for(int i = 0; i < pizza.toppingCount; i++){
        out << pizza.toppings[i] << " ";
    }

    return out;
}
///Breyta Pizza í PizzaOrder sem er klasi af Pizzum.
///PizzaOrder>Pizza>Topping
