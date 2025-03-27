#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include <string>
#include <iostream>

class Dog : public Pet {
private:
    std::string breed;

public:
    // Default constructor
    Dog();

    // Parameterized constructor
    Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed);

    // Setter for breed
    void setBreed(const std::string& newBreed);

    // Getter for breed
    std::string getBreed() const;

    // Override printInfo function
    void printInfo() const override;

    // Override makeSound function
    void makeSound() const override;
};

#endif // DOG_H