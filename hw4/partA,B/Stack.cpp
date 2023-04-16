#include "Stack.h"

Stack::Stack(void):
_top(-1), _stackSize(MaxStackSize) {_stackList = new DataType[MaxStackSize];}

Stack::~Stack()
{
    std::cout << "destruct" << std::endl;
}

void Stack::PushExtend(const DataType& item)
{
    DataType *new_stacklist = new DataType[2*_stackSize];
    
    for (int i = 0; i < _stackSize; i++)//copy _stacklist to new_stacklist
        new_stacklist[i] = _stackList[i];
    
    _stackSize += _stackSize;//twice the stacksize
    
    delete(_stackList);
    _stackList = new DataType[_stackSize];
    for (int i = 0; i < _stackSize/2; i++)
    {

        _stackList[i] = new_stacklist[i];
    }
    
    delete(new_stacklist);
    //push
    _stackList[++_top] = item;
    
}
void Stack::Push(const DataType& item)
{
    if(IsStackFull() == true)//stack is full
        PushExtend(item);
    else
        _stackList[++_top] = item;
    
}
DataType Stack::Pop()
{
    if (IsStackEmpty() == true)
        return -1;
    else
        return _stackList[_top--];
    
}
void Stack::ClearStack() 
{
    _top == -1;
}
DataType Stack::Top() const
{
    return _stackList[_top];
}
bool Stack::IsStackEmpty() const
{
    if (_top == -1)
        return true;

    return false;
}
bool Stack::IsStackFull() const
{
    if (_top == _stackSize - 1)//stack full
        return true;
    
    return false;
}