#include <iostream>
#include <string>
using namespace std;


class Deserts : public Menu {
public:
    string desert;

    Deserts() : desert("Cheezcake Fondan Cake") {
        cout << "What is the price of Cheezcake?" << endl;
    }
    ~Deserts() {
        cout << "Deserts destructor was called" << endl;
    }

    void Print() {
        cout << "Desert: " << desert << endl;
    }
};