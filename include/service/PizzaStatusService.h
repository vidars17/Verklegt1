#ifndef PIZZASTATUSSERVICE_H
#define PIZZASTATUSSERVICE_H
#include "PizzaOrderRepo.h"

class PizzaStatusService
{
    public:
        void setPizzaStatus();
        void getPizzaStatus();
    private:
        PizzaOrderRepo pizzaOrderRepo;
        PizzaOrder pizzaOrder;
};

#endif // PIZZASTATUSSERVICE_H
