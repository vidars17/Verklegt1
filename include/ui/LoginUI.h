#ifndef LOGINUI_H
#define LOGINUI_H
#include <string>
#include <iostream>
#include <cstdlib>
#include "AlphaLoginUI.h"
using namespace std;



class LoginUI
{
    public:
        LoginUI();
    private:
        AlphaLoginUI alphaLoginUI;
        void checkLogin(string input);
        string input;
        string alpha = "alpha"; ///Compiler warning (warning: non-static data member initializers only available with -std=c++11 or -std=gnu++11)
        string manager;
        string sales;
        string baker;
        string delivery;
        string quit = "quit";
};

#endif // LOGINUI_H
