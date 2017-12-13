#include "ToppingRepo.h"
#include <string>

void ToppingRepo::makeTopping() {
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
}

