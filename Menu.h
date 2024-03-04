#include <iostream>
using namespace std;



class Menu {
private:
    int price;
    string nameofdish;

public:
    
    Menu() : Menu(55, "Carbonara") {}

    
    Menu(int p, string name) : price(p), nameofdish(name) {}

    ~Menu() {
        cout << "Menu object destroyed" << endl;
    }

    void Print() {
        cout << "Price: " << price << endl;
        cout << "Name of Dish: " << nameofdish << endl;
    }
};