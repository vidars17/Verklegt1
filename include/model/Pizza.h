#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <iostream>

using namespace std;


class Pizza
{
    public:
        Pizza(string name, string topping, int price);

    private:
        string name;
        string topping;
        int price;
};

#endif // PIZZA_H
