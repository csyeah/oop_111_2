#include <iostream>

class Animal
{

public:
    Animal(/* args */){}
    ~Animal();
    virtual void print()
    {
        std::cout << "this is an animal, ";
    }
};
Animal::~Animal()
{
    std::cout << "destruct animal" << std::endl;
}
class Dog:public Animal
{
protected:
public:
    Dog(){}
    ~Dog()
    {
        std::cout << "destruct dog" << std::endl;
    }
    void print() 
    {
        Animal::print();
        std::cout << "and eats meat" << std::endl;
    }
};
int main(void)
{
    Dog dog;
    Animal *p;
    p = &dog;
    p->print();
    delete p;
    return 0;
}
