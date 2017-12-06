#include "MenuService.h"

MenuService::MenuService()
{
    //ctor
}

void MenuService::addPizza() {
    cout << "Please enter Name of Pizza" << endl;
    cin >> name;
    cout << "Please Enter desired toppings" << endl;
    cin >> topping;
    cout << "What is the price of this bad boy"  << endl;
    cin >> price;

    Pizza pizza(name, topping, price);
    pizzarepo.pizzaOut(pizza);
}

void MenuService::editMenu() {

}
