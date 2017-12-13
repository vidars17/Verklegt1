#include "PizzaRepo.h"

void PizzaRepo::storePizza(Pizza& pizza) {
    ofstream fout;
    fout.open("PizzaList.txt", ios::app);
    fout << pizza << endl;
    fout.close();

}

void PizzaRepo::retrievePizza() {
    ifstream fin;
    string str;
    fin.open("PizzaList.txt");
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
