#include "PizzaOrderService.h"

void PizzaOrderService::makePizzaOrder(){
    char task = '\0';
    cout << "M: Make order" << endl;
    cout << "R: Read order" << endl;
    cin >> task;
    switch(task){
		case 'm':
        case 'M':{
            int pizzaCnt;
            cout << "How many pizzas: ";
            cin >> pizzaCnt;
            cout << endl;
			PizzaOrder pizzaOrder(pizzaCnt);
				for (int i = 0; i < pizzaCnt; i++) {
				Pizza pizza;
				PizzaRepo pizza2;
				pizza2.retrievePizza();
				cin >> pizza;
				pizzaOrder.addPizza(pizza);
				}
			cout << pizzaOrder;
			PizzaOrderRepo pizzaOrderRepo;
			pizzaOrderRepo.storePizzaOrder(pizzaOrder);
			cout << endl;
			}break;

            case 'r':
            case 'R':{
                PizzaOrderRepo repo;
                repo.retrievePizzaOrder();
                ///cout << pizza;
                cout << endl;
                }break;
    }
}
