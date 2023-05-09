#include <iostream>
#include "test.h"

Test::Test(/* args */)
{
    ++count;
}

Test::~Test()
{
}

void Test::print()
{
    std::cout << count << std::endl;
}

int main()
{
    Test a, b, c;
    c.print();
    return 0;
}