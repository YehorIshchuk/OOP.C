#include "Customer.h"
using namespace std;


Customer :: Customer() : numberoforders(5), profit(1079) {}

    ~Customer() {
        cout << "Customer object destroyed" << endl;
    }