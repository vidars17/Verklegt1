#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <iostream>
#include <fstream>
#include <string>


#include "Topping.h"

using namespace std;

class ToppingRepo
{
    public:
        void readTopping();
        void writeTopping();
    private:
        Topping topping;

};

#endif // TOPPINGREPO_H
