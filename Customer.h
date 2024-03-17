#include <iostream>
using namespace std;



class Customer {
public:
    int numberoforders;
    int profit;
    string person;
    string company;

    Customer &operator=(const Customer &rhs){
if (this != &rhs){
    profit = rhs.profit;
}
return *this;
    }

    Customer() : numberoforders(5), profit(1079), person("Olersandr Petrenko"), company("Microsoft"){}

    ~Customer() {
        cout << "Customer destructor was called " << endl;
    }

    void Print() {
        cout << "Number of Orders: " << numberoforders << endl;
        cout << "Profit: " << profit << endl;
    }
};