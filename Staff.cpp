#include <iostream>
using namespace std;
#include "Staff.h"


 Staff :: Staff() : freecars(3), priceofdelivery(75), salary(20000), tips(50), dish("Pasta") {}

    

    Staff :: ~Staff() {
        cout << "Staff destructor was called" << endl;
    }