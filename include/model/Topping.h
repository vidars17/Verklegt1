#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>

using namespace std;

class Topping
{
    public:
        Topping();
        Topping(string name, int price);
        string getName() const;
        int getPrice() const;
    private:
        string name;
        int price;

};

#endif // TOPPING_H
