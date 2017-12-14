#include "PizzaService.h"
#include "Topping.h"
#include "isValidNoNumberException.h"
#include "isValidNumberException.h"

void PizzaService::makePizza(){
    char task = '\0';
    cout << "M: Make pizza" << endl;
    cout << "R: Read pizza" << endl;
    cin >> task;
    switch(task){
		case 'm':
        case 'M':{
            int toppingCnt;
            cout << "How many toppings: ";
            cin >> toppingCnt;
            cout << endl;
			Pizza pizza(toppingCnt);
            for (int i = 0; i < toppingCnt; i++) {
            Topping topping;
            ToppingRepo topping2;
            topping2.readTopping();
            cin >> topping;
            pizza.addTopping(topping);
            }
			cout << pizza;
			PizzaRepo pizzaRepo;
			pizzaRepo.storePizza(pizza);
			cout << endl;
			}break;

            case 'r':
            case 'R':{
                PizzaRepo repo;
                repo.retrievePizza();
                ///cout << pizza;
                cout << endl;
                }break;
    }
}

bool Topping::isValidNoNumber(const Topping& topping) {  /// Spurning um að nota exceptions?
    string name = topping.getName();

    for(unsigned int i = 0; i < name.length(); i++) {
        if (isdigit(name[i]))
            throw isValidNoNumberException();
            }
             return true;
    }
bool Topping::isValidNumber(const Topping& topping) {
    if (topping.getPrice() < 0 || topping.getPrice() > 3500000) {
            throw isValidNumberException();
            }
             return true;
}
