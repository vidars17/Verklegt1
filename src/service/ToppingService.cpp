#include "ToppingService.h"

void ToppingService::addTopping() {
    char answer;
    do{
        ToppingRepo topping;
        topping.readTopping();
        topping.writeTopping();
        cout << "Do you want to add another topping?(y/n)";
        cin >> answer;
    } while (answer == 'y');

}
