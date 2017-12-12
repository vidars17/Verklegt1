#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <iostream>

using namespace std;


class Pizza
{
    public:
        Pizza();

        string getName() const;
        string getTopping() const;
        int getPrice() const;

        void setName();
        void setTopping();
        void setPrice();

    private:
        string name;
        string topping; ///Ætti hugsanlega að vera einhver önnur og einfaldari gagnatýpa sem einfaldara væri að meðhöndla.
        int price;
};

#endif // PIZZA_H
