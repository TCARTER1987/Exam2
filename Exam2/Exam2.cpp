#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    Date d1;                   
    Date d2(2024, 12, 25);     

    cout << "Date 1:" << endl;
    d1.printNumeric();
    d1.printFormal();
    d1.printEuro();

    cout << "\nDate 2:" << endl;
    d2.printNumeric();
    d2.printFormal();
    d2.printEuro();

    return 0;
}
