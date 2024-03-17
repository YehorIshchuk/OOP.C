#include <iostream>
#include "Menu.h"
using namespace std;


Menu :: Menu() : price(550), nameofdish("Carbonara") {}

    Menu :: ~Menu() {
        cout << "Menu destructor was called" << endl;
    }