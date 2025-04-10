// Kirsten Richards
// CPSC-25 - Virtual Pet Management System
#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Fish.h"

int main() {

    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else std::cout << "Both pets have the same name.\n";

    // testing dog
    Dog dog1("Belly", "Dog", 8, 6, "French Bulldog");
    Dog dog2("Buddy", "Dog", 7, 2, "Border Collie");
    std::cout << "\nDog 1 Info:\n";
    dog1.printInfo();
    dog1.makeSound(); 
    std::cout << "\nDog 2 Info:\n";
    dog2.printInfo();
    dog2.makeSound(); 
    std::cout << "\n";

    // Polymorphism Dog
    std::cout << "Another Dog:\n";
    Pet* petPtrDog = new Dog("Molly", "Dog", 10, 7, "Border Collie");
    petPtrDog->printInfo();
    petPtrDog->makeSound();

    // testing cat
    Cat cat1("Miso", "Cat", 1, 8, "Orange Tabby", "Yarn");
    Cat cat2("Fig", "Cat", 2, 3, "Tuxedo", "Mouse");
    std::cout << "\nCat 1 Info:\n";
    cat1.printInfo();
    cat1.makeSound(); 
    std::cout << "\nCat 2 Info:\n";
    cat2.printInfo();
    cat2.makeSound(); 
    std::cout << "\n";

    // Polymorphism Cat
    std::cout << "Another Cat:\n";
    Pet* petPtrCat = new Cat("Fluffy", "Cat", 5, 1, "Siamese", "Laser Pointer");
    petPtrCat->printInfo();
    petPtrCat->makeSound();
    std::cout << "\n";

    // testing fish
    Fish fish1("Bubbles", "Fish", 1, 4, "Orange", "Goldfish", "5 gallons");
    Fish fish2("Sharky", "Fish", 2, 7, "Silver", "Bala Shark", "20 gallons");
    std::cout << "Fish 1 Info:\n";
    fish1.printInfo();
    fish1.makeSound(); 
    std::cout << "\nFish 2 Info:\n";
    fish2.printInfo();
    fish2.makeSound(); 
    std::cout << "\n";

    // Polymorphism Fish
    std::cout << "Another Fish:\n";
    Pet* petPtrFish = new Fish("Francis", "Fish", 1, 1, "Blue", "Tetra", "2.5 gallons");
    petPtrFish->printInfo();
    petPtrFish->makeSound();
    std::cout << "\n";

    // Deallocate Pointer Memory
    delete petPtrDog;
    delete petPtrCat;
    delete petPtrFish;

    return 0;
}
