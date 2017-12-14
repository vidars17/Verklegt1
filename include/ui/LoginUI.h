#ifndef LOGINUI_H
#define LOGINUI_H
#include <iostream>
#include <string>
#include <cstdlib>

#include "ToppingService.h"
#include "PizzaService.h"
#include "PizzaOrderService.h"
#include "PizzaStatusService.h"

using namespace std;



class LoginUI
{
    public:
        LoginUI();

        void welcomeUI();
        void adminMenuUI();
        void AlphaLoginUI();
        void salesUI();
        void bakerUI();
        void deliveryUI();
        void managerUI();
        void checkInput(string input);
        void checkInputTwo(string input);
        void checkInputThree(string input);
        void checkInputFour(string input);
        void checkInputZero(string input);

    private:
        string input;
        string alpha;
        string manager;
        string sales;
        string baker;
        string delivery;
        string quit;
        ToppingService toppingService;
        PizzaService pizzaService;
        PizzaOrderService pizzaOrderService;
        PizzaOrder pizzaOrder;
        PizzaStatusService pizzaStatusService;

};

#endif // LOGINUI_H
