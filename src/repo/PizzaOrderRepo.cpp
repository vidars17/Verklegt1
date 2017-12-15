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

int PizzaOrderRepo::searchPrice(string topping) {
    int total = 0;
    ifstream fin;
    fin.open("ToppingsList.txt");
        if(fin.is_open()) {
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
    fin.close();
        }
    return total;
}


int PizzaOrderRepo::parseToppings(string line) {
    int totalltvo = 0;
    int index = line.find(',');
    int indexOfSecond = line.find(',', index+1);
    string totalleitt = line.substr(index+1, (indexOfSecond-1) - index);
    totalltvo = atoi(totalleitt.c_str());
    return totalltvo;
}

string PizzaOrderRepo::parseTopp(string topping) {
    string line;
    ifstream fin;
    fin.open("ToppingsList.txt");
    if(fin.is_open()) {
    string search = topping;
    bool found = false;
    while(!fin.eof() && !found) {
    string line;
    getline(fin, line);
    if(line.find(search) != string::npos) {
        found = true;
        int index = line.find(',');
        string alegg = line.substr(0, index);
        return alegg;
        }
}
    }return 0;}
