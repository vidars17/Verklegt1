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
        friend ostream& operator <<(ostream& out, const Topping& topping);
    private:
        string name;
        int price;
        bool isValidNoNumber(const Topping& topping);
        bool isValidNumber(const Topping& topping);

};

#endif // TOPPING_H
