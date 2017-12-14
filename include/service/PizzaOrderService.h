#ifndef PIZZAORDERSERVICE_H
#define PIZZAORDERSERVICE_H
#include "PizzaOrder.h"
#include "ToppingRepo.h"
#include "PizzaOrderRepo.h"


class PizzaOrderService
{
    public:
        void makePizzaOrder();
        int parseToppings(string line);
    private:
};

#endif // PIZZAORDERSERVICE_H
