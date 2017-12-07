#ifndef PIZZAMENUREPO_H
#define PIZZAMENUREPO_H
#include <iostream>
#include <fstream>
#include "Pizza.h"

using namespace std;

class PizzaMenuRepo
{
    public:
        PizzaMenuRepo();
        void addToRepo(Pizza& pizza);
        void seePizza(char tag);
        void pizzaOut(Pizza& pizza);
        void pizzaIn();

        friend ostream& operator <<(ostream& out, const Pizza& pizza);
        friend istream& operator >>(istream& in, Pizza& pizza);
    private:
};

#endif // PIZZAMENUREPO_H
