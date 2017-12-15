#include <iostream>
#include <string>
#include <fstream>
#include "LoginUI.h"
#include "Pizza.h"
#include "AlphaLoginUI.h"
#include "Topping.h"
#include "PizzaService.h"
#include "PizzaOrder.h"

using namespace std;


LoginUI::LoginUI()
{
    //ctor
}

void LoginUI::welcomeUI() {
        while(true) {

        cout << "*****************" << endl;
        cout << "*Pizzawesomeness*" << endl;
        cout << "*****************" << endl;
        cout << "*****************" << endl;
        cout << "*Bjoggis special*" << endl;
        cout << "3 x thistilhjortu" << endl;
        cout << "***Only 2000kr***" << endl;
        cout << "Batcave exclusive" << endl;
        cout << "****Afram HK*****" << endl;
        cout << "*****************" << endl << endl;

        cout << "Alpha - Manager" << endl;
        cout << "Operator" << endl;
        cout << "Baker" << endl;
        cout << "Delivery" << endl;
        cout << "Exit (Q)" << endl << endl;
        cout << "Login as: ";
        string input;
        cin >> input;
        checkInputZero(input);
        cout << endl;
        }
}
void LoginUI::checkInputZero(string input) {
    if(input == "alpha" || input == "Alpha" || input == "Manager" || input == "manager" ||
       input == "Vidar" || input == "vidar" || input == "Ogri" || input == "ogri" || input == "Bjossi" || input == "bjossi"){
                LoginUI adminMenuUI;
                adminMenuUI.AlphaLoginUI();
    }
    else if(input == "operator" || input == "Operator" || input =="O" || input =="o"){
                LoginUI salesMenuUI;
                salesMenuUI.salesUI();
    }
    else if(input == "Baker" || input == "baker" || input =="b" || input =="B"){
                LoginUI bakerMenuUI;
                bakerMenuUI.bakerUI();

    }
    else if(input == "Delivery" || input == "delivery" || input =="D" || input =="d"){
                LoginUI deliveryMenuUI;
                deliveryMenuUI.deliveryUI();
    }
    else if(input == "Q" || input == "q" || input == "EXIT" || input == "exit" || input =="Exit" || input =="Quit" || input =="quit" || input =="QUIT"){
                exit(0);
                cout << endl;
                }
    else {
        cout << "Invalid input!" << endl;

    }
}
void LoginUI::AlphaLoginUI() {
        while(true){
        cout << endl << "Welcome to Alpha Beast mode!!" << endl << "Please choose a task." << endl << "*********************" << endl << endl;
        cout << "1: Add pizza" << endl << "2: Add toppings and prices" << endl;
        cout << "3: Add order" << endl << "4: Mark status" << endl << "5: Get a pizza order" << endl;
        cout << "6: Mark hi" << endl << "Q: Quit to menu" << endl;
        string input;
        cin >> input;
        checkInput(input);
    }
}

void LoginUI::checkInput(string input) {
    if(input == "1"){
        pizzaService.makePizza();
    }
    else if(input == "2"){
        toppingService.addTopping();
    }
    else if(input == "3"){
        pizzaOrderService.makePizzaOrder();
    }
    else if(input == "4"){
        cout << "Select the following characters for corresponding actions:" << endl;
        cout << "**********************************************************" << endl;
        cout << "[1] ----------------- Mark as Paid" << endl;
        cout << "[2] ----------------- Mark as In Progress" << endl;
        cout << "[3] ----------------- Mark as Ready" << endl;
        cout << "[4] ----------------- Mark as Delivered" << endl;

        pizzaStatusService.setPizzaStatus();
    }
    else if(input == "5"){
        pizzaStatusService.getPizzaStatus();
    }
    else if(input == "6"){
                cout << endl << endl << endl;
                cout << "       Oh HI Mark!     :)" << endl << endl << endl << endl;
                LoginUI alphaMenu;
                alphaMenu.AlphaLoginUI();
                cout << endl;

    }
    else if(input == "Q" || input == "q"){
                LoginUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
    }
    else {
        cout << "Invalid input!" << endl;
    }
}

   void LoginUI::parseString(string line) {
    int index = line.find("Order");
    string name = line.substr(0, index);
    cout << name << endl;

}

void LoginUI::salesUI() {
    while(true){
        cout << endl << "Operator Tasks!" << endl << "Please choose a task." << endl << "*********************" << endl << endl;
        cout << "1: Make order" << endl << "Q: Quit to menu" << endl << endl;
        string input;
        cin >> input;
        checkInputTwo(input);
    }
}

void LoginUI::checkInputTwo(string input) {
    if(input == "1" || input == "2" || input == "3" || input == "4"){
        pizzaOrderService.makePizzaOrder();
    }
    else if(input == "Q" || input == "q"){
                LoginUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
                }
    else {
        cout << "Invalid input!" << endl;
    }
}

void LoginUI::bakerUI() {
    while(true){
        cout << endl << "Baker Tasks!" << endl << "Please choose a task." << endl << "*********************" << endl << endl;
        cout << "1 then 2: Mark as in progress" << endl << "1 then 3: Mark as ready" << endl << "Q: Quit to menu" << endl << endl;
        string input;
        cin >> input;
        checkInputThree(input);
    }
}

void LoginUI::checkInputThree(string input) {
    if(input == "1"){
        pizzaStatusService.setPizzaStatus();
    }
    else if(input == "Q" || input == "q"){
                LoginUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;

    }
    else {
        cout << "Invalid input!" << endl;
    }
    }
void LoginUI::deliveryUI() {
         while(true){
        cout << endl << "Delivery Tasks!" << endl << "Please choose a task." << endl << "*********************" << endl << endl;
        cout << "1 then 1: Mark order as payed" << endl << "1 then 4: Mark order as delivered" << endl << "Q: Quit to menu" << endl << endl;
        cin >> input;
        checkInputFour(input);
    }
}

void LoginUI::checkInputFour(string input) {
    if(input == "1"){
        pizzaStatusService.setPizzaStatus();
    }
    else if(input == "Q" || input == "q"){
                LoginUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
    }
    else {
        cout << "Invalid input!" << endl;
    }
}
