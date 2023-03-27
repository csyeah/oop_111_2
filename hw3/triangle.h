#ifndef TRIANGLE_H
#define TRIANGLE_H

#include<iostream>
#include<cmath>
#include<iomanip>
class Triangle
{
private:
    int length;
    char border_char;
    char fill_char;
public:
    Triangle(int input, char bor = '#', char fil = '*'):
        length(input > 39 ? 39: input < 1 ? 1: input), border_char(bor), fill_char(fil) {}
    int GetSize();
    int Perimeter();
    double Area();
    void Draw();
    void Grow();
    void Shrink();
    void SetBorder(char ch);
    void SetFill(char ch);
    void Summary();
    ~Triangle(){}
};

#endif