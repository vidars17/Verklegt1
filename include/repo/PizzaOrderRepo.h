#ifndef PIZZAORDERREPO_H
#define PIZZAORDERREPO_H
#include "PizzaOrder.h"
#include "ToppingRepo.h"
#include <fstream>
#include <cstdlib>



class PizzaOrderRepo
{
    public:
        void retrievePizzaOrder();
        void storePizzaOrder(int pizzaCnt, char staerd, string topping, int total);
        void setPizzaStatus(string status);
        int parseToppings(string line);
        int searchPrice(string topping);
        string parseTopp(string line);
    private:
        ToppingRepo pizza2;
        PizzaOrder pizzaOrder();
};

#endif // PIZZAORDERREPO_H


