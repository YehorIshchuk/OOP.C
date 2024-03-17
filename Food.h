#include <iostream>
#include <string>
using namespace std;


class Food : public Menu {
public:
    string food;

    Food() : food("Pizza Sushi Burger Pasta") {
        cout << "What is the price of " << food << "?" << endl;
    }
    ~Food() {
        cout << "Food destructor was called" << endl;
    }

    void Print() {
        cout << "Food: " << food << endl;
    }
};