#include "PizzaService.h"

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
