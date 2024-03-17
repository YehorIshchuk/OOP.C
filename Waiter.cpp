#include<iostream>
#include"Waiter.h"
using namespace std;




Waiter :: Waiter() {
        cout << "We are ready to take your order" << endl;
    }

    Waiter :: ~Waiter() {
        cout << "Waiter destructor was called" << endl;
    }