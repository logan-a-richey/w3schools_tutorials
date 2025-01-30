/*******************************************************************************
W3Schools - C++ Tutorial
32_polymorphism.cpp
https://www.w3schools.com/cpp/cpp_polymorphism.asp
2024-12-23
*******************************************************************************/

/*
Polymorphism means "many forms", and it occurs when we have many classes that
are related to each other by inheritance.

Like we specified in the previous chapter;
Inheritance lets us inherit attributes and methods from another class.
Polymorphism uses those methods to perform different tasks.
This allows us to perform a single action in different ways.

For example, think of a base class called Animal that has a method called
animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds,
And they also have their own implementation of an animal sound (the pig oinks,
and the cat meows, etc.):

In C++, the virtual keyword is used to indicate that a function can be
overridden in a derived class, allowing for runtime polymorphism.
*/

#include <iostream>

class Animal {
public:
    virtual void animalSound() {
        std::cout << "The animal makes a sound \n";
    }
};

class Pig : public Animal {
public:
    void animalSound() {
        std::cout << "The pig says: wee wee \n";
    }
};

class Dog : public Animal {
public:
    void animalSound() {
        std::cout << "The dog says: bow wow \n";
    }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}

