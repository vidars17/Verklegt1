#include "PizzaOrderService.h"
#include <string>
#include "PizzaRepo.h"
#include "ToppingRepo.h"

void PizzaOrderService::makePizzaOrder(){
    string input;
    cout << "M: Make order" << endl;
    cout << "R: Read order" << endl;
    cin >> input;
    if(input == "m" ||input == "M"){
        char staerd = '\0';
        cout << "Price for pizzas: " << endl;
        cout << "Small  =  1000" << endl;
        cout << "Medium =  1500" << endl;
        cout << "Large  =  2000" << endl << endl;
        cout << "Choose between (S)mall, (M)edium or (L)arge pizza. ";
        cin >> staerd;
        cout << endl;
        int total = 0;

        if(staerd == 's' || staerd == 'S'){
            total = 1000;
        }
        else if(staerd == 'm' || staerd == 'M'){
            total = 1500;
        }
        else if(staerd == 'l' || staerd == 'L'){
            total = 2000;
        }

        string topping;
        int pizzaCnt;
        cout << "How many pizzas: ";
        cin >> pizzaCnt;
        total = total * pizzaCnt;
        cout << endl;
        PizzaOrder pizzaOrder(pizzaCnt);
        pizzaOrderRepo.storePizzaOrder(pizzaCnt, staerd, topping, total);/*
            ofstream fout;
            fout.open("pizzaorders.txt");
            fout << "This order has " << pizzaCnt << " pizza(s)." << endl;
            fout << "Size: " << staerd << endl;
        for (int i = 0; i < pizzaCnt; i++) {
                cout << "How many toppings: ";
                int numberoftoppings;
                cin >> numberoftoppings;
                cout << endl;
            for (int j = 0; j < numberoftoppings; j++){
                fout << "With " << numberoftoppings << " topping(s)." << endl;
                ToppingRepo pizza2;
                pizza2.readTopping(); cout << endl;
                cout << "Topping: ";
                cin >> topping;
                total = total + pizzaOrderRepo.searchPrice(topping);
                fout << "With " << pizzaOrderRepo.parseTopp(topping) << endl;
            }
            fout << "Order total is: " << total << " kr." << endl;
            fout.close();
        }*/

       /* PizzaOrderRepo pizzaOrderRepo;
        pizzaOrderRepo.storePizzaOrder(pizzaOrder);*/
    }
    else if(input == "r" || input == "R") {
        PizzaOrderRepo repo;
        repo.retrievePizzaOrder();
        ///cout << pizza;
        cout << endl;
    }
}
