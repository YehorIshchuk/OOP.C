#include <iostream>
#include <string>
using namespace std;
#include "Staff.h"
#include"Customer.h"
#include"Menu.h"

int main() {
    Staff a; 
    a.Print();

    Staff a1(100, true); 
    a1.Print();

    Staff a2(200); 
    a2.Print();

    Staff::OrdersCount(); 
    cout << "Total Orders: " << Staff::GetCount() << endl;

    Customer customer1(100);
    cout << "Customer1:" << endl;
    customer1.Print(); 

    Customer customer2(50);
    cout << "Customer2:" << endl;
    customer2.Print();

    cout << "Applying unary operator (-) to customer1:" << endl;
    (-customer1).Print(); 

    cout << "Applying binary operator (+) to customer1 and customer2:" << endl;
    (customer1 + customer2).Print(); 

    return 0;


    Menu c;
    c.Print();
    c.SetPrice(125);
    c.PrintQuantity();
    c.SetQuantity(20);

    return 0;
}
