#ifndef MENUSERVICE_H
#define MENUSERVICE_H
#include <iostream>
#include <string>
///#include "Pizza.h"
#include "PizzaMenuRepo.h"

using namespace std;

class MenuService
{
    public:
        MenuService();
        void addPizza();
        void editMenu();
    private:
        string name;
        string topping;
        int price;
        PizzaMenuRepo pizzarepo;
};

#endif // MENUSERVICE_H
