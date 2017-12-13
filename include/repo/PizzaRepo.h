#ifndef PIZZAREPO_H
#define PIZZAREPO_H
#include "Pizza.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class PizzaRepo
{
    public:
        void retrievePizza();
        void storePizza(Pizza& pizza);

    private:
};

#endif // PIZZAREPO_H
