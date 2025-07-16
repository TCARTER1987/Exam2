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
    /*
    Date
-day: int
-month: int
-year: int

+Day() - Date () actyally
+Day(y: int, m: int, d: int) - Date
+~Day() - Date
+getters …
+setters …
+printNumeric(): void
+printFormal(): void
+printEuro(): void

    */
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
