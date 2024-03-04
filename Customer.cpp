#include <iostream>
#include"Customer.h"
using namespace std;

Customer(int value) : numberoforders(5), profit(1079) {
        data = new int(value);
    }

    
    Customer(Customer && other)  {
        cout << "Move constructor was called" << endl;
        data = other.data;
        other.data = nullptr;
    }

    
    ~Customer() {
        delete data;
        cout << "Customer object destroyed" << endl;
    }

    
    Customer operator-() const {
        Customer result(*this); 
        *result.data = -*result.data; 
        return result;
    }

    
    Customer operator+(const Customer& other) const {
        Customer result(0);
        *result.data = *data + *other.data;
        return result;
    }