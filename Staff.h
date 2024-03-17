#include <iostream>
#include <string>
using namespace std;



class Staff {
public:
    int freecars;
    int priceofdelivery;
    int salary;
    int tips;
    string dish;

    //Staff(const Staff& other) : salary{other.salary} {
        //cout << "Staff copy constructor" << endl;
    //}

    Staff() : freecars(3), priceofdelivery(75), salary(20000), tips(50), dish("Pasta") {}

    

    ~Staff() {
        cout << "Staff destructor was called" << endl;
    }

    void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }
};