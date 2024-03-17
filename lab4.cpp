#include <iostream>
#include <string>
#include "Staff.h"
#include "Waiter.h"
#include "Cook.h"
#include "Customer.h"
#include "Person.h"
#include "Company.h"
#include "Menu.h"
#include "Drinks.h"
#include "Deserts.h"
#include "Food.h"

using namespace std;

/*class Staff {
public:
    int freecars;
    int priceofdelivery;
    int salary;
    int tips;
    string dish;

    //Staff(const Staff& other) : salary{other.salary} {
        //cout << "Staff copy constructor" << endl;
    //}

    Staff() : freecars(3), priceofdelivery(75), salary(20000), tips(50), dish("Pasta") {}

    

    ~Staff() {
        cout << "Staff destructor was called" << endl;
    }

    void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }
};

class Waiter : public Staff {
public:
    int doublesalary;

    //Waiter(const Waiter& other) : Staff(other), doublesalary{other.doublesalary} {
        //cout << "Waiter copy constructor was called" << endl;
    //}

    Waiter() {
        cout << "We are ready to take your order" << endl;
    }

    ~Waiter() {
        cout << "Waiter destructor was called" << endl;
    }

    void Print() {
        cout << "Salary: " << salary << endl;
        cout << "Tips: " << tips << endl;
    }
};

class Cook : public Staff {
public:
    Cook() {
        cout << "Choose the dish" << endl;
    }

    ~Cook() {
        cout << "Cook destructor was called" << endl;
    }

    void Print() {
        cout << "Salary: " << salary << endl;
        cout << "Dish: " << dish << endl;
    }
};

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

class Person : public Customer {
public:

int doubleprofit;

    Person &operator=(const Person&rhs){

        if (this !=&rhs){
            Customer::operator=(rhs);
            doubleprofit = rhs.doubleprofit;

        }
        return *this;
    }

    Person() {
        cout << "What is the price of delivery?" << endl;
    }
    ~Person() {
        cout << "Person destructor was called" << endl;
    }

    void Print() {
        cout << "Name and Surname: " << person << endl;
    }
};

class Company : public Customer {
public:
    Company() {
        cout << "What is the price of delivery?" << endl;
    }
    ~Company() {
        cout << "Company destructor was called" << endl;
    }

    void Print() {
        cout << "Name of Company: " << company << endl;
    }
};

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
};*/

int main() {
    Staff a;
    a.Print();

    Waiter a1;
    a1.Print();

    Cook a2;
    a2.Print();

    Customer b;
    b.Print();

    Person b1;
    b1.Print();

    Company b2;
    b2.Print();

    Menu c;
    c.Print();

    Drinks c1;
    c1.Print();

    Deserts c2;
    c2.Print();

    Food c3;
    c3.Print();

    return 0;
}
