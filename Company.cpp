#include <iostream>
#include "Company.h"
using namespace std;




Company :: Company() {
        cout << "What is the price of delivery?" << endl;
    }
    Company :: ~Company() {
        cout << "Company destructor was called" << endl;
    }