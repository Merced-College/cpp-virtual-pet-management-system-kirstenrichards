#include "Cat.h"

// Default constructor
Cat::Cat() : Pet(), breed("Unknown"), favoriteToy("Unknown") {}

// Parameterized constructor
Cat::Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), breed(breed), favoriteToy(favoriteToy) {}

// Getter for breed
std::string Cat::getBreed() const {
    return breed;
}

// Setter for breed
void Cat::setBreed(const std::string& newBreed) {
    breed = newBreed;
}

// ADDITION: Getter for favoriteToy
std::string Cat::getFavoriteToy() const {
    return favoriteToy;
}

// ADDITION: Setter for favoriteToy
void Cat::setFavoriteToy(const std::string& newFavoriteToy) {
    favoriteToy = newFavoriteToy;
}

// Override printInfo function
void Cat::printInfo() const {
    Pet::printInfo(); // Call base class printInfo
    std::cout << "Breed: " << breed << std::endl;
    std::cout << "Favorite Toy: " << favoriteToy << std::endl; // ADDITION
}

// Override makeSound function
void Cat::makeSound() const {
    std::cout << "Purr Purr" << std::endl;
}