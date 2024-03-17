#include <iostream>
#include <string>
#include "Deserts.h"
using namespace std;


Deserts :: Deserts() : desert("Cheezcake Fondan Cake") {
        cout << "What is the price of Cheezcake?" << endl;
    }
   Deserts ::  ~Deserts() {
        cout << "Deserts destructor was called" << endl;
    }