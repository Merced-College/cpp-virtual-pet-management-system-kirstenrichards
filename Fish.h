#ifndef FISH_H
#define FISH_H

#include "Pet.h"
#include <string>
#include <iostream>

class Fish : public Pet {
private:
    std::string color; // ADDITION
    std::string breed;
    std::string tankSize; // ADDITION

public:
    // Default constructor
    Fish();

    // Parameterized constructor
    Fish(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& color, const std::string& breed, const std::string& tankSize);

    // ADDITION: Setter for color
    void setColor(const std::string& newColor);

    // ADDITION: Getter for color
    std::string getColor() const;

    // Setter for breed
    void setBreed(const std::string& newBreed);

    // Getter for breed
    std::string getBreed() const;

    // ADDITION: Setter for tankSize
    void setTankSize(const std::string& newTankSize);

    // ADDITION: Getter for tankSize
    std::string getTankSize() const;

    // Override printInfo function
    void printInfo() const override;

    // Override makeSound function
    void makeSound() const override;
};

#endif // FISH_H