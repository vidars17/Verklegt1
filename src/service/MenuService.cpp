#include "MenuService.h"

MenuService::MenuService()
{
    //ctor
}

void MenuService::addPizza() {
    cout << "Please enter name of pizza: " << endl;
    cout << "Please enter desired toppings: " << endl;
    ///Hér ætti hugsanlega að koma listi af möguleikum úr ToppingRepo sem væru indexaðir svo villu-check væru einfaldari
    cout << "What is the price of this bad boy: "  << endl;

    Pizza pizza;
    pizzarepo.pizzaOut(pizza);
}

void MenuService::addTopping() {

}
