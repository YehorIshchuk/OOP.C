#include <iostream>
#include <string>
#include "Food.h"
using namespace std;



Food :: Food() : food("Pizza Sushi Burger Pasta") {
        cout << "What is the price of " << food << "?" << endl;
    }
    Food :: ~Food() {
        cout << "Food destructor was called" << endl;
    }