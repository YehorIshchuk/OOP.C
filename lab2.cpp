#include <iostream>
#include <string>
using namespace std;
#include "Staff.h"
#include "Customer.h"
#include "Menu.h"

int main() {

    Staff a(350, true);
    a.Print();

    Customer b;
    b.Print();

    Menu c;
    c.Print();

    return 0;
}

