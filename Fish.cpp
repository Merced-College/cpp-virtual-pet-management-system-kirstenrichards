#include "Fish.h"

// Default constructor
Fish::Fish() : Pet(), color("Unknown"), breed("Unknown"), tankSize("Unknown") {}

// Parameterized constructor
Fish::Fish(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& color, const std::string& breed, const std::string& tankSize)
    : Pet(name, species, age, hungerLevel), color(color), breed(breed), tankSize(tankSize) {}

// ADDITION: Setter for color
void Fish::setColor(const std::string& newColor) {
    color = newColor;
}

// ADDITION: Getter for color
std::string Fish::getColor() const {
    return color;
}

// Setter for breed
void Fish::setBreed(const std::string& newBreed) {
    breed = newBreed;
}

// Getter for breed
std::string Fish::getBreed() const {
    return breed;
}

// ADDITION: Setter for tankSize
void Fish::setTankSize(const std::string& newTankSize) {
    tankSize = newTankSize;
}

// ADDITION: Getter for tankSize
std::string Fish::getTankSize() const {
    return tankSize;
}

// Override printInfo function
void Fish::printInfo() const {
    Pet::printInfo(); // Call base class printInfo
    std::cout << "Color: " << color << std::endl; // ADDITION
    std::cout << "Breed: " << breed << std::endl;
}

// Override makeSound function
void Fish::makeSound() const {
    std::cout << "Blub Blub" << std::endl;
}