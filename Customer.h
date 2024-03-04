#include <iostream>
using namespace std;


class Customer {
private:
    int numberoforders;
    int profit;
    int* data;
    int age;
    string name;

public:
    
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

    
    void Print() const {
        cout << "Number of Orders: " << numberoforders << endl;
        cout << "Profit: " << profit << endl;
        cout << "Data value: " << *data << endl;
    }
};