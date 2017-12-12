#include "LoginUI.h"
LoginUI::LoginUI()
{
        while(true) {
            string input;
            alpha = "alpha";

            quit = "quit";
            cout << "Login: " << endl;
            cin >> input;
            checkLogin(input);
        }
}

void LoginUI::checkLogin(string input){
    AlphaLoginUI alphaLoginUI;
    if(input.compare(alpha) == 0) {
        alphaLoginUI.alphaMenu();
    }
    else if(input.compare(manager) == 0) {

    }
    else if(input.compare(sales) == 0) {

    }
    else if(input.compare(baker) == 0) {

    }
    else if(input.compare(delivery) == 0) {

    }
    else if(input.compare(quit) == 0) {
        exit(0);
    }
}
