#include <iostream>
#include"Menu.h"
using namespace std;



Menu() : price(0), nameofdish("Carbonara") {
    }
    ~Menu() {
        cout << "Menu object destroyed" << endl;
    }