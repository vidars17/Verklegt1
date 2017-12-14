#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include <iostream>
#include <string>
#include "Pizza.h"
#include "PizzaRepo.h"
#include "ToppingRepo.h"

using namespace std;

class PizzaService
{
    public:
        void makePizza();

    private:
        bool isValidNoNumber(const Pizza& Pizza);
        bool isValidNumber(const Pizza& Pizza);
};

#endif // PIZZASERVICE_H
