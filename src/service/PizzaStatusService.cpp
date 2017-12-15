#include "PizzaStatusService.h"

void PizzaStatusService::setPizzaStatus() {

    char input;
    cin >> input;

    switch(input) {
        case '1': {
        pizzaOrder.setPaid();
        pizzaOrderRepo.setPizzaStatus(pizzaOrder.getPaid());
        }break;

        case '2': {
        pizzaOrder.setStatusInProgress();
        pizzaOrderRepo.setPizzaStatus(pizzaOrder.getStatus());
        }break;

        case '3': {
        pizzaOrder.setStatusReady();
        pizzaOrderRepo.setPizzaStatus(pizzaOrder.getStatus());
        }break;

        case '4': {
        pizzaOrder.setStatusDelivered();
        pizzaOrderRepo.setPizzaStatus(pizzaOrder.getStatus());
        }break;

    }
}

void PizzaStatusService::getPizzaStatus() {
    pizzaOrderRepo.retrievePizzaOrder();
}

///Hér ætti hugsanlega að kalla í set fallið og retrieve í leiðinni og síðan store order.
///setja upp switch case sem branch-ar í mark as föll
