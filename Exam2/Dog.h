#pragma once
#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog {
private:
    int age;
    string name;
    const string breed;

public:
    /*
    Dog

-age: int
-name: string
-const breed: string

+Dog()
+Dog(age: int, name: string, breed: string)
+getAge(): int
+getAgeInDogYears(): int
+getName(): string
+getBreed(): string
+setAge(age: int): void
+setName(name: string): void
+describe(): string
+   (trick one) : string
+   (trick two) : string

    */
    Dog(); 
    Dog(int a, string n, string b); 

    int getAge() const;
    int getAgeInDogYears() const;
    string getName() const;
    string getBreed() const;

    void setAge(int a);
    void setName(string n);

    string describe() const;
    string shake() const;
    string rollOver() const;
};

#endif
