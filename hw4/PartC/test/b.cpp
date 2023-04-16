#include <iostream>
#include "b.h"
B::B(/* args */)
{}

B::~B()
{std::cout << "destruct\n";}
void B::set_id(int new_id)
{
    id = new_id;
}
int B::get_id()
{
    return id;
}