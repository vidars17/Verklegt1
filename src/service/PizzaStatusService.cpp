#include "PizzaStatusService.h"

void PizzaStatusService::setPizzaStatus(PizzaOrder& pizzaOrder) {
    pizzaOrderRepo.storePizzaOrder(pizzaOrder);
    cout << "lol";
}

///H�r �tti hugsanlega a� kalla � set falli� og retrieve � lei�inni og s��an stor order.
