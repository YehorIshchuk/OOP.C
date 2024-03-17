#include <iostream>
using namespace std;



class Person : public Customer {
public:

int doubleprofit;

    Person &operator=(const Person&rhs){

        if (this !=&rhs){
            Customer::operator=(rhs);
            doubleprofit = rhs.doubleprofit;

        }
        return *this;
    }

    Person() {
        cout << "What is the price of delivery?" << endl;
    }
    ~Person() {
        cout << "Person destructor was called" << endl;
    }

    void Print() {
        cout << "Name and Surname: " << person << endl;
    }
};