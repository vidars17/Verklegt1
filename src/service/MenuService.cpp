#include "MenuService.h"

MenuService::MenuService()
{
    //ctor
}

void MenuService::addPizza() {
    cout << "Please enter name of pizza: " << endl;
    cout << "Please enter desired toppings: " << endl;
    ///H�r �tti hugsanlega a� koma listi af m�guleikum �r ToppingRepo sem v�ru indexa�ir svo villu-check v�ru einfaldari
    cout << "What is the price of this bad boy: "  << endl;

    Pizza pizza;
    pizzarepo.pizzaOut(pizza);
}

void MenuService::addTopping() {

}
