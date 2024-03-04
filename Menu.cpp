#include "Menu.h"
using namespace std;



Menu :: Menu() : Menu(55, "Carbonara") {}

    
    Menu :: Menu(int p, string name) : price(p), nameofdish(name) {}

    ~Menu() {
        cout << "Menu object destroyed" << endl;
    }