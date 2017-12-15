#include "PizzaOrderRepo.h"

void PizzaOrderRepo::retrievePizzaOrder() {
    ifstream fin;
    string str;
    fin.open("pizzaorders.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl;
        }
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();
}
void PizzaOrderRepo::storePizzaOrder(const PizzaOrder& pizzaOrder) {
    ofstream fout;
    fout.open("pizzaorders.txt");
    fout << pizzaOrder << endl;
    fout.close();

}


void PizzaOrderRepo::setPizzaStatus(string status) {
    ofstream fout;
    fout.open("pizzaorders.txt", ios::app);
    fout << status << endl;
    fout.close();
}
