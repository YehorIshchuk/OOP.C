#include <iostream>
using namespace std;


class Menu {
public:
    int price;
    string nameofdish;

    Menu() : price(550), nameofdish("Carbonara") {}

    ~Menu() {
        cout << "Menu destructor was called" << endl;
    }

    void Print() {
        cout << "Price: " << price << endl;
        cout << "Name of Dish: " << nameofdish << endl;
    }
};