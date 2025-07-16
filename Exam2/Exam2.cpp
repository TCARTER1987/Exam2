
#include <iostream>
#include "Date.h"
#include "Dog.h"
using namespace std;
// hey
int main() {
 
    Date d1;
    Date d2(2024, 12, 25);

    cout << "=== Date 1 ===" << endl;
    d1.printNumeric();
    d1.printFormal();
    d1.printEuro();

    cout << "\n=== Date 2 ===" << endl;
    d2.printNumeric();
    d2.printFormal();
    d2.printEuro();

   
    cout << "\n=== Dog Demo ===" << endl;

    Dog dog1(3, "Fido", "Labrador");
    Dog dog2(2, "Bella", "Beagle");

    cout << dog1.describe() << endl;
    cout << "Age in dog years: " << dog1.getAgeInDogYears() << endl;
    cout << dog1.shake() << endl;
    cout << dog1.rollOver() << endl;

    cout << "\n";

    cout << dog2.describe() << endl;
    cout << "Age in dog years: " << dog2.getAgeInDogYears() << endl;
    cout << dog2.shake() << endl;
    cout << dog2.rollOver() << endl;

    return 0;
}
