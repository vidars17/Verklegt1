#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>

using namespace std;

class Topping
{
    public:
        Topping();
        string getName() const;
        int getPrice() const;
        void setName();
        void setPrice();

        friend istream& operator >>(istream& in, Topping& topping);
        friend ostream& operator <<(ostream& out, Topping& topping);
    private:
        string name;
        int price;

};

#endif // TOPPING_H
