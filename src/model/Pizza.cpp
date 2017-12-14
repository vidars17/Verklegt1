#include "Pizza.h"

Pizza::Pizza()
{
    toppingCount = 0;
    currentToppingNum = 0;
}

Pizza::Pizza(int numberOfToppings) {
    initialize(numberOfToppings);
}
void Pizza::initialize(int numberOfToppings){
    toppingCount = numberOfToppings;
    this->currentToppingNum = 0;
}
/*
void Pizza::clean(){
     if(toppings != 0){
        delete[] toppings;
        toppingCount = 0;
        toppings = 0;
        currentToppingNum = 0;
    }
}
Pizza::~Pizza()
{
    clean();
}
*/
void Pizza::addTopping(Topping topping){
    if (currentToppingNum < toppingCount){
        toppings[currentToppingNum] = topping;
        currentToppingNum++;
    }
}

istream& operator >> (istream& in, Pizza& pizza){
    int toppingCount;
    in >> toppingCount;
    pizza.initialize(toppingCount);
    Topping topping; ///setja throw exception
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
