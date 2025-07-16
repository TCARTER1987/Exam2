#include "Dog.h"

Dog::Dog() : breed("Mixed") {
    age = 1;
    name = "Unnamed";
}

Dog::Dog(int a, string n, string b) : breed(b) {
    age = a;
    name = n;
}

int Dog::getAge() const {
    return age;
}
// Dog years age * 7 
int Dog::getAgeInDogYears() const {
    return age * 7;
}

string Dog::getName() const {
    return name;
}

string Dog::getBreed() const {
    return breed;
}

void Dog::setAge(int a) {
    age = a;
}

void Dog::setName(string n) {
    name = n;
}

string Dog::describe() const {
    return name + " is a " + breed + " and is " + to_string(age) + " years old.";
}
// outupt given for shake
string Dog::shake() const {
    return name + " lifts a paw to shake your hand.";
}
// output given for roll over
string Dog::rollOver() const {
    return name + " rolls over playfully on the floor.";
}
