#pragma once
#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date();                       
    Date(int y, int m, int d);   
    ~Date();                      

    int getDay();
    int getMonth();
    int getYear();
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    void printNumeric(); 
    void printFormal(); 
    void printEuro();    
};

#endif
