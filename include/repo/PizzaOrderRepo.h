#ifndef PIZZAORDERREPO_H
#define PIZZAORDERREPO_H
#include "PizzaOrder.h"
#include <fstream>



class PizzaOrderRepo
{
    public:
        void retrievePizzaOrder();
        void storePizzaOrder(const PizzaOrder& pizzaOrder);

    private:
};

#endif // PIZZAORDERREPO_H


