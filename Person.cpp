#include <iostream>
#include "Person.h"
using namespace std;





Person :: Person() {
        cout << "What is the price of delivery?" << endl;
    }
    Person :: ~Person() {
        cout << "Person destructor was called" << endl;
    }