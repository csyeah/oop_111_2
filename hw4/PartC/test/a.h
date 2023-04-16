#ifndef A_H
#define A_H
#include "b.h"
typedef class B realB;
class A
{
private:
    char school[11];
    realB student[5];
public:
    A(const char *name);
    ~A();
    void print();
    void set_new();
};


#endif