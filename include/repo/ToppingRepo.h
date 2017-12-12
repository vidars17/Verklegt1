#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <iostream>
#include <fstream>
#include <string>
#include "ToppingService.h"
#include "Topping.h"

using namespace std;

class ToppingRepo
{
    public:
        ToppingRepo();
        void makeTopping(ToppingRepo& topping);
        Topping getName(Topping topping);
        Topping getPrice(Topping topping);
        friend ostream& operator << (ostream& out,const ToppingRepo& topping);
        friend istream& operator >> (istream& in, ToppingRepo& topping);
    private:


};

#endif // TOPPINGREPO_H
