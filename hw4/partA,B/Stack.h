#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cstdbool>
#include <cstdlib>
typedef int DataType;
const int MaxStackSize = 2;

class Stack
{
private:
    DataType *_stackList;
    int _stackSize;
    int _top;
    void PushExtend(const DataType& item);
public:
    Stack(void);
    void Push(const DataType& item);
    DataType Pop(void);
    void ClearStack(void); //reset the value of top

    // return item on top of the stack
    DataType Top(void) const;
    // check if the stack is empty
    bool IsStackEmpty(void) const;
    bool IsStackFull(void) const;
    ~Stack();
};

#endif