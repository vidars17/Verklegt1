#include "MenuService.h"

MenuService::MenuService()
{
    //ctor
}

void MenuService::addPizza() {
    cout << "Please enter name of pizza: " << endl;
    cout << "Please enter desired toppings: " << endl;
    cout << "What is the price of this bad boy: "  << endl;

    Pizza pizza;
    pizzarepo.pizzaOut(pizza);
}

void MenuService::editMenu() {

}
