#include <iostream>
#include "Customer.h"
using namespace std;


Customer :: Customer() : numberoforders(5), profit(1079), person("Olersandr Petrenko"), company("Microsoft"){}

    Customer :: ~Customer() {
        cout << "Customer destructor was called " << endl;
    }