#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H
#include "Topping.h"


class ToppingService
{
    public:
        void addTopping(Topping topping);
    private:
        Topping topping;
};

#endif // TOPPINGSERVICE_H
