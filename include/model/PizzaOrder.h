#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include "Pizza.h"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

class PizzaOrder
{
    public:
        PizzaOrder();
        void setStatus();
        void setPaid();
        string getStatus() const;
        string getPaid() const;
        PizzaOrder(int numberOfPizzas);
        void initialize(int numberOfPizzas);
        void addPizza(Pizza pizza);
        void clean();
        friend istream& operator >> (istream& in, PizzaOrder& pizzaOrder);
        friend ostream& operator << (ostream& out, const PizzaOrder& pizzaOrder);

        void setStatusReady();
        void setStatusInProgress();
        void setStatusDelivered();

        virtual ~PizzaOrder();
    private:
        char status;
        char paid;
        Pizza *pizzas;
        int pizzaCount;
        int currentPizzaNum;
};

#endif // PIZZAORDER_H
