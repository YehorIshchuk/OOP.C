
#include <iostream>
using namespace std;



class Staff {
public:
    int freecars;
    int priceofdelivery;

    Staff() : freecars(0), priceofdelivery(0) {}

    
    Staff(int valuex, bool boolean) : priceofdelivery(valuex), freecars(boolean ? 1 : 0) {}

    Staff(int valuex) : Staff(valuex, true) {} 

    ~Staff() {
        cout << "Staff object destroyed" << endl;
    }

    void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }
};