#ifndef TRIANGLE_H
#define TRIANGLE_H

#include<iostream>
class Triangle
{
private:
    const int length;
    char border_char;
    char fill_char;
public:
    Triangle(int input, char bor = '#', char fil = '*'):
        length(input > 39 ? 39: input < 1 ? 1: input), border_char(bor), fill_char(fil) {}
    int GetSize();
    int perimeter();
    int Area();
    void Draw();
    void Grow();
    void Shrink();
    void Setborder();
    void Setfill();
    void Summary();
    ~Triangle();
};

#endif