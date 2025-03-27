#ifndef CAT_H
#define CAT_H

#include "Pet.h"
#include <string>
#include <iostream>

class Cat : public Pet {
private:
    std::string breed;
    std::string favoriteToy; // ADDITION

public:
    // Default constructor
    Cat();

    // Parameterized constructor
    Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed, const std::string& favoriteToy);

    // Setter for breed
    void setBreed(const std::string& newBreed);

    // Getter for breed
    std::string getBreed() const;

    // ADDITION: Setter for favoriteToy
    void setFavoriteToy(const std::string& newFavoriteToy);

    // ADDITION: Getter for favoriteToy
    std::string getFavoriteToy() const;

    // Override printInfo function
    void printInfo() const override;

    // Override makeSound function
    void makeSound() const override;
};

#endif // CAT_H