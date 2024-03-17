#include <iostream>
using namespace std;




class Drinks : public Menu {
public:
    string drink;

    Drinks() : drink("Juice Coke Beer Tea Coffe") {
        cout << "What is the price of Juice?" << endl;
    }
    ~Drinks() {
        cout << "Drink destructor was called" << endl;
    }

    void Print() {
        cout << "Drink: " << drink << endl;
    }
};