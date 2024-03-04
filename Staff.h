class Staff {
public:
    int freecars;
    int priceofdelivery;
    static int orders;

    static int GetCount() {
        return orders;
    }

    static void OrdersCount() {
        orders++;
    }

    Staff() : freecars(0), priceofdelivery(0) {}

    Staff(int valuex, bool boolean) : priceofdelivery(valuex) {
        if (boolean) {
            freecars = 1;
        } else {
            cout << "No cars available" << endl;
        }
    }

    Staff(int valuex) : priceofdelivery(valuex), freecars(1) {}

    
    Staff(const Staff& other) : freecars(other.freecars), priceofdelivery(other.priceofdelivery) {}

    ~Staff() {
        cout << "Staff object destroyed" << endl;
    }

    void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }
};