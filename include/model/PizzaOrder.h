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
        PizzaOrder(int numberOfPizzas);
        void initialize(int numberOfPizzas);
        void addPizza(Pizza pizza);
        void clean();
        friend istream& operator >> (istream& in, PizzaOrder& pizzaOrder);
        friend ostream& operator << (ostream& out, const PizzaOrder& pizzaOrder);

        virtual ~PizzaOrder();
    private:
        char status;
        bool paid;
        Pizza *pizzas;
        int pizzaCount;
        int currentPizzaNum;
};

#endif // PIZZAORDER_H
