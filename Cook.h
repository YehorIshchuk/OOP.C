#include <iostream>
using namespace std;




class Cook : public Staff {
public:
    Cook() {
        cout << "Choose the dish" << endl;
    }

    ~Cook() {
        cout << "Cook destructor was called" << endl;
    }

    void Print() {
        cout << "Salary: " << salary << endl;
        cout << "Dish: " << dish << endl;
    }
};