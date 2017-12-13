#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <iostream>
#include "Topping.h"
using namespace std;


class Pizza
{
    public:
        Pizza();
        Pizza(int numberOfToppings);
        void initialize(int numberOfToppings);
        void addTopping(Topping topping);
        void clean();
        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, const Pizza& pizza);

        virtual ~Pizza();

    protected:

    private:
        Topping *toppings;
        int toppingCount;
        int currentToppingNum;
};

#endif // PIZZA_H
