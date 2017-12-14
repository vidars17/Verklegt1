#include "PizzaOrder.h"

PizzaOrder::PizzaOrder() {
    Pizza pizza();
    setStatus();
    this->paid = false;
    int numberOfPizzas = 0;
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



PizzaOrder::PizzaOrder(int numberOfPizzas) {
    initialize(numberOfPizzas);
}
void PizzaOrder::initialize(int numberOfPizzas){
    pizzaCount = numberOfPizzas;
    pizzas = new Pizza[pizzaCount];
    currentPizzaNum = 0;
}
void PizzaOrder::clean(){
     if(pizzas != 0){
        delete[] pizzas;
        pizzaCount = 0;
        pizzas = 0;
        currentPizzaNum = 0;
    }
}
PizzaOrder::~PizzaOrder()
{
    clean();
}
void PizzaOrder::addPizza(Pizza pizza){
    if (currentPizzaNum < pizzaCount){
        pizzas[currentPizzaNum] = pizza;
        currentPizzaNum++;
    }
}



istream& operator >> (istream& in, PizzaOrder& pizzaOrder){
    int pizzaCount;
    in >> pizzaCount;
    pizzaOrder.initialize(pizzaCount);
    Pizza pizza;
    for(int i = 0; i < pizzaOrder.pizzaCount; i++){
        in >> pizza;
        pizzaOrder.addPizza(pizza);
    }
    return in;
}
ostream& operator << (ostream& out, const PizzaOrder& pizzaOrder){
    out << "Pizza with " << pizzaOrder.pizzaCount << " toppings: " << endl;

    for(int i = 0; i < pizzaOrder.pizzaCount; i++){
        out << pizzaOrder.pizzas[i] << " ";
    }

    return out;
}
///Breyta Pizza í PizzaOrder sem er klasi af Pizzum.
///PizzaOrder>Pizza>Topping

