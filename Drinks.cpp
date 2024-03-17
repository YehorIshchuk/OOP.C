#include <iostream>
#include "Drinks.h"
using namespace std;


Drinks :: Drinks() : drink("Juice Coke Beer Tea Coffe") {
        cout << "What is the price of Juice?" << endl;
    }
   Drinks ::  ~Drinks() {
        cout << "Drink destructor was called" << endl;
    }