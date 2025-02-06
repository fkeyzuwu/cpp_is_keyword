#include <iostream>
#include "is_keyword.hpp"

using namespace std;

class Animal
{
    public:
        virtual ~Animal() {}; // Ensure a virtual function exists for RTTI
};

class Dog : public Animal {};

class Plane
{
public:
    virtual ~Plane() {}; // Ensure a virtual function exists for RTTI
};

int main()
{
    Dog dog;
    Plane plane;
    Animal* animal = new Dog();

    if(dog is (Animal))
        cout << "dog is an animal" << endl;
    else
        cout << "dog is not an animal" << endl;

    if(plane is (Animal))
        cout << "plane is an animal" << endl;
    else
        cout << "plane is not an animal" << endl;

    if(*animal is (Dog))
        cout << "animal is dog" << endl;
    else
        cout << "animal is not dog" << endl;
}
