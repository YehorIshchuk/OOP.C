#include<iostream>
#include<string>
using namespace std;


class Waiter : public Staff {
public:
    int doublesalary;

    //Waiter(const Waiter& other) : Staff(other), doublesalary{other.doublesalary} {
        //cout << "Waiter copy constructor was called" << endl;
    //}

    Waiter() {
        cout << "We are ready to take your order" << endl;
    }

    ~Waiter() {
        cout << "Waiter destructor was called" << endl;
    }

    void Print() {
        cout << "Salary: " << salary << endl;
        cout << "Tips: " << tips << endl;
    }
};