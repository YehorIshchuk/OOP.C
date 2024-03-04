#include <iostream>
using namespace std;
#include "Staff.h"


Staff :: Staff() : freecars(0), priceofdelivery(0) {}

    
   Staff :: Staff(int valuex, bool boolean) : priceofdelivery(valuex), freecars(boolean ? 1 : 0) {}

    Staff ::Staff(int valuex) : Staff(valuex, true) {} 

    ~Staff() {
        cout << "Staff object destroyed" << endl;
    }