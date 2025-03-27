#include "Dog.h"

// Default constructor
Dog::Dog() : Pet(), breed("Unknown") {}

// Parameterized constructor
Dog::Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {}

// Getter for breed
std::string Dog::getBreed() const {
    return breed;
}

// Setter for breed
void Dog::setBreed(const std::string& newBreed) {
    breed = newBreed;
}

// Override printInfo function
void Dog::printInfo() const {
    Pet::printInfo(); // Call base class printInfo
    std::cout << "Breed: " << breed << std::endl;
}

// Override makeSound function
void Dog::makeSound() const {
    std::cout << "Ruff! Ruff!" << std::endl;
}