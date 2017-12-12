#include "ToppingRepo.h"

Topping ToppingRepo::getname(Topping topping) {
    return topping.getName();
}
Topping ToppingRepo::getPrice(Topping topping) {
    return topping.getPrice();
}

void ToppingRepo::makeTopping(ToppingRepo& topping) {
    ifstream fin;
    string str;
    fin.open("ToppingsList.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl;
        }
        cout << fin.eof() << endl;
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();
    cin >> topping;
    ofstream fout;
    fout.open("ToppingsList.txt", ios::app);
    fout << topping;
    fout.close();

    fin.open("ToppingsList.txt", ios::app);
    fin.close();
    cout << topping;
}

istream& operator >> (istream& in, ToppingRepo& topping){
    in >> getName();
    in >> getPrice();
    return in;
}
ostream& operator << (ostream& out, const ToppingRepo& topping){
    out << getName() << ", ";
    out << getPrice() << endl;
    return out;
}

