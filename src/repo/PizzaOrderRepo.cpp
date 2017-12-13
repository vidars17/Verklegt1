#include "PizzaOrderRepo.h"

PizzaOrderRepo::PizzaOrderRepo()
{
    //ctor
}

void PizzaOrderRepo::addOrder(const PizzaOrder& pizzaOrder) {
    ofstream fout;
    fout.open("pizzaorders.txt", ios::app);
    if(fout.is_open()) {
       // fout << PizzaOrder;
        fout.close();
    }
}


/// skoða betur
