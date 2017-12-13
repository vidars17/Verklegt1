#ifndef ALPHALOGINUI_H
#define ALPHALOGINUI_H
#include <iostream>
#include <string>
#include <cstdlib>
#include "MenuService.h"
#include "ToppingService.h"
#include "PizzaService.h"

using namespace std;

class AlphaLoginUI
{
    public:
        AlphaLoginUI();
        void alphaMenu();

    private:
        void checkInput(char input);
        char input;
        ToppingService toppingService;
        PizzaService pizzaService;

};

#endif // ALPHALOGINUI_H
