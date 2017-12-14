#include "PizzaStatusService.h"

void PizzaStatusService::setPizzaStatus(PizzaOrder& pizzaOrder) {
    pizzaOrderRepo.storePizzaOrder(pizzaOrder);
    cout << "lol";
}

///Hér ætti hugsanlega að kalla í set fallið og retrieve í leiðinni og síðan stor order.
