#include <iostream>
using namespace std;

class Menu {
private:
    int price;
    string nameofdish;
    int quantityofdrinks;

public:
    Menu() : price(0), nameofdish("Carbonara") {
    }
    ~Menu() {
        cout << "Menu object destroyed" << endl;
    }
     void PrintQuantity() const{

    cout <<"Quantity of Drinks:" << this -> quantityofdrinks<<endl;
}
    void SetQuantity(int newquantityofdrinks){
this -> quantityofdrinks = newquantityofdrinks;

    }

    void Print() {
        cout << "Price: " <<  price << endl;
        cout << "Name of Dish: " << nameofdish << endl;
    }
    void SetPrice(int price)
    {
        this -> price = price;
        cout << "Price:" << this -> price << endl;
    }
};