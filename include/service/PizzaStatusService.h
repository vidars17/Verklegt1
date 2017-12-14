#ifndef PIZZASTATUSSERVICE_H
#define PIZZASTATUSSERVICE_H
#include "PizzaOrderRepo.h"

class PizzaStatusService
{
    public:
        void setPizzaStatus(PizzaOrder& pizzaOrder);

    private:
        PizzaOrderRepo pizzaOrderRepo;
};

#endif // PIZZASTATUSSERVICE_H
