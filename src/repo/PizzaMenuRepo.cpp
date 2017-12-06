#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo()
{
    //ctor
}

ostream& operator <<(ostream& out, const Pizza& pizza) {
    out << pizza.getName() << " " << pizza.getTopping() << " " << pizza.getPrice() << endl;
    return out;
}

istream& operator >>(istream& in, Pizza& pizza);

void PizzaMenuRepo::pizzaOut(Pizza pizza) {
    cout << pizza << endl;
}
