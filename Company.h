#include <iostream>
using namespace std;


class Company : public Customer {
public:
    Company() {
        cout << "What is the price of delivery?" << endl;
    }
    ~Company() {
        cout << "Company destructor was called" << endl;
    }

    void Print() {
        cout << "Name of Company: " << company << endl;
    }
};