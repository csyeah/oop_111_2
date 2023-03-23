#ifndef TRIANGLE_H
#define TRIANGLE_H

#include<iostream>
class Triangle
{
private:
    const int length;
    const char border_char;
    const char fill_char;
public:
    Triangle(int input, char bor = '#', char fil = '*'):
        length(input), border_char(bor), fill_char(fil) {}
    ~Triangle();
};

#endif