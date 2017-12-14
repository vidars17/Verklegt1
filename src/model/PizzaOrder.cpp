#include "PizzaOrder.h"

PizzaOrder::PizzaOrder() {
    Pizza pizza();
    this->status = '\0';
    this->paid = false;
}

void PizzaOrder::setStatusReady(){
    char status = 'r';
    this->status = status;
}

void PizzaOrder::setStatusInProgress(){
    char status = 'p';
    this->status = status;
}

void PizzaOrder::setStatusDelivered(){
    char status = 'd';
    this->status = status;
}

void PizzaOrder::setPaid() {
    this->paid = true;
}

string PizzaOrder::getStatus() const{
    char status = '\0';
    string progress;
    status = this->status;
    switch(status) {
        case 'p':
        case 'P': {
            progress = "In progress.";
            return progress;
        }break;
        case 'r':
        case 'R': {
            progress = "Ready.";
            return progress;
        }break;
        case 'd':
        case 'D': {
            progress = "Delivered.";
            return progress;
        }break;
    }
    progress = "Recieved.";
    return progress;
}

string PizzaOrder::getPaid() const{
    string isPaid;
    if(this->paid == true) {
        isPaid = "Order has been paid.";
        return isPaid;
    }
    isPaid = "Order has not been paid.";
    return isPaid;
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
    out << "Order with " << pizzaOrder.pizzaCount << " pizzas: " << endl;
    out << endl;
    for(int i = 0; i < pizzaOrder.pizzaCount; i++){
        out << pizzaOrder.pizzas[i] << " ";
    }
    out << endl;
    out << pizzaOrder.getStatus() << endl;
    out << pizzaOrder.getPaid() << endl;

    return out;
}
///Breyta Pizza í PizzaOrder sem er klasi af Pizzum.
///PizzaOrder>Pizza>Topping

