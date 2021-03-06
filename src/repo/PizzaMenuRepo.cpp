#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo()
{
    //ctor
}

ostream& operator <<(ostream& out, const Pizza& pizza) {
    out << pizza.getName() << " " << pizza.getTopping() << " " << pizza.getPrice() << endl;
    return out;
}
/*
istream& operator >>(istream& in, Pizza& pizza) {
    in >> pizza.getName();
    in >> pizza.getTopping();
    in >> pizza.getPrice();
    return in;
}
*/
void PizzaMenuRepo::pizzaOut(Pizza& pizza) {
    ofstream fout ("pizzamenu.txt");
    fout.open("pizzamenu.txt");

    fout << pizza << endl;
    fout.close();
}

void PizzaMenuRepo::pizzaIn() {
    ifstream fin ("pizzamenu.txt");
    if (fin.is_open()){
        string str;
        while(getline(fin, str)) {
            cout << str << endl;
        }
    }
}
