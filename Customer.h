
#include <iostream>
using namespace std;

class Customer {
private:
    int numberoforders;
    int profit;

public:
    
    Customer() : numberoforders(5), profit(1079) {}

    ~Customer() {
        cout << "Customer object destroyed" << endl;
    }

    void Print() {
        cout << "Number of Orders: " << numberoforders << endl;
        cout << "Profit: " << profit << endl;
    }
};