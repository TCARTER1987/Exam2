#include "Date.h"
#include <iostream>
using namespace std;

string monthNames[13] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
}

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

Date::~Date() {
   
}

int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }

void Date::setDay(int d) { day = d; }
void Date::setMonth(int m) { month = m; }
void Date::setYear(int y) { year = y; }

/*
printNumeric --  12/15/2018
printFormal --  December 25, 2018
printEuro -- 25 December 2018

*/
void Date::printNumeric() {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::printFormal() {
    cout << monthNames[month] << " " << day << ", " << year << endl;
}

void Date::printEuro() {
    cout << day << " " << monthNames[month] << " " << year << endl;
}
