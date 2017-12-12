#include "AlphaLoginUI.h"

AlphaLoginUI::AlphaLoginUI(){

}

void AlphaLoginUI::alphaMenu() {
    while(true){
        ///system("cls");
        cout << "Alpha User welcome!" << endl << "Please choose a task." << endl << "*********************" << endl << endl;
        cout << "1: Edit price on menu" << endl << "2: Edit toppings and prices" << endl;
        cout << "3: Add order" << endl << "4: Mark paid" << endl << "5: Get a pizza order" << endl;
        cout << "6: Mark in-progress" << endl << "7: Mark ready" << endl << "8: Mark delivered" << endl << "9: Mark hi" << endl;
        char input;
        cin >> input;
        checkInput(input);
    }
}

void AlphaLoginUI::checkInput(char input) {
    if(input == '1'){
        menuService.addPizza();
    }
    else if(input == '2'){
        ///toppingService.addTopping();
    }
    else if(input == '3'){

    }
    else if(input == '4'){

    }
    else if(input == '5'){

    }
    else if(input == '6'){

    }
    else if(input == '7'){

    }
    else if(input == '8'){

    }
    else if(input == '9'){
        cout << "Oh hi Mark" << endl;
        exit(0);
    }
    else {
        cout << "Invalid input!" << endl;
    }
}
