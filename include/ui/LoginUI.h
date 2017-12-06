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
        string alpha;
        string manager;
        string sales;
        string baker;
        string delivery;
        string quit;
};

#endif // LOGINUI_H
