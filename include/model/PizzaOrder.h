#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include "Pizza.h"
#include <iostream>
#include <string>

using namespace std;

class PizzaOrder
{
    public:
        PizzaOrder();
        void setStatus();
        void setPaid();
        char getStatus();
        void getPaid();

        friend istream& operator >>(istream& in, Pizza& pizzaOrder);
        friend ostream& operator <<(ostream& out, const PizzaOrder& pizzaOrder);

    private:
        char status;
        bool paid = false;
};

#endif // PIZZAORDER_H
