#include "PizzaOrderService.h"
#include <string>
#include <fstream>
#include <cstdlib>
#include "PizzaRepo.h"
#include "ToppingRepo.h"

int PizzaOrderService::parseToppings(string line) {
    int index = line.find(',');
    int indexOfSecond = line.find(',', index+1);
    string totalleitt = line.substr(index+1, (indexOfSecond-1) - index);
    int totalltvo = 0;
    totalltvo = atoi(totalleitt.c_str());
    return totalltvo;
}


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
            ifstream fin;
            fin.open("ToppingsList.txt");
            if(fin.is_open()) {
            string topping;
            int pizzaCnt;
            cout << "How many pizzas: ";
            cin >> pizzaCnt;
            cout << endl;
			PizzaOrder pizzaOrder(pizzaCnt);
				for (int i = 0; i < pizzaCnt; i++) {
                        cout << "How many toppings: ";
                        int numberoftoppings;
                        cin >> numberoftoppings;
                        cout << endl;
                    for (int j = 0; j < numberoftoppings; j++){
                        ToppingRepo pizza2;
                        pizza2.readTopping(); cout << endl;
                        cout << "Topping: ";
                        cin >> topping;
                        string search = topping;
                        bool found = false;
                        while(!fin.eof() && !found) {
                        string line;
                        getline(fin, line);
                        if(line.find(search) != string::npos) {
                            found = true;
                            total = total + parseToppings(line);
                            }
                        }
                    }
                    cout << pizzaOrder << endl;

            cout << endl << "Order total is: " << total << " kr." << endl;
            }
            }
            }else if(input == "r" || input == "R") {
                PizzaOrderRepo repo;
                repo.retrievePizzaOrder();
                ///cout << pizza;
                cout << endl;
                }
}
