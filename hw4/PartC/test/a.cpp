#include <iostream>
#include <string.h>
#include "b.h"
#include "a.h"
A::A(const char *name)
{strcpy(school, name);}

A::~A()
{
}
void A::set_new()
{
    std::cout << "enter 5 id " << std::endl;
    for (int i = 0; i < 5 ;i++)
    {
        int tmp;
        std::cin >> tmp;
        student[i].set_id(tmp);
    }
    
}
void A::print()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i+1 << ":" << student[i].get_id();
    }
    
}