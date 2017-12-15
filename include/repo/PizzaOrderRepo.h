#ifndef PIZZAORDERREPO_H
#define PIZZAORDERREPO_H
#include "PizzaOrder.h"
#include <fstream>
#include <cstdlib>



class PizzaOrderRepo
{
    public:
        void retrievePizzaOrder();
        void storePizzaOrder(const PizzaOrder& pizzaOrder);
        void setPizzaStatus(string status);
        int parseToppings(string line);
        int searchPrice(string topping);
        string parseTopp(string line);
    private:
};

#endif // PIZZAORDERREPO_H


