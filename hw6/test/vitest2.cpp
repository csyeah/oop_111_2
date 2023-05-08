#include <iostream>

class Animal {
public:
    virtual void eat()
    {
        std::cout << "don't knowQQ" << std::endl;
    }
};
class Cow:public Animal {
public:
    virtual void eat() override
    {
        std::cout << "I eat grass" << std::endl;
    }
};
class Dog:public Animal {
public:
    void eat() {
        std::cout << "I eat meat" << std::endl;
    }
};
int main(void) {
    Animal *ptr, animal;
    Cow cow;
    Dog dog;
    ptr = &cow;
    ptr->eat();
    ptr = &dog;
    ptr->eat();
    ptr = &animal;
    ptr->eat();
    return 0;
}