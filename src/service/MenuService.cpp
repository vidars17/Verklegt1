#include "MenuService.h"

MenuService::MenuService()
{
    //ctor
}

void MenuService::addPizza() {
    cin >> name;
    cin >> topping;
    cin >> price;

    Pizza pizza(name, topping, price);
}

void MenuService::editMenu() {

}
