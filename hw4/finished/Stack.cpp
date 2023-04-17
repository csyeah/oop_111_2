#include "Stack.h"

template <class DataType>
Stack<DataType>::Stack(void):
_top(-1), _stackSize(MaxStackSize) {_stackList = new DataType[MaxStackSize];}



template <class DataType>
void Stack<DataType>::PushExtend(const DataType& item)
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
template <class DataType>
void Stack<DataType>::Push(const DataType& item)
{
    if(IsStackFull() == true)//stack is full
        PushExtend(item);
    else
        _stackList[++_top] = item;
    
}
template <class DataType>
DataType Stack<DataType>::Pop()
{
    if (IsStackEmpty() == true)
        return -1;
    else
        return _stackList[_top--];
    
}
template <class DataType>
void Stack<DataType>::ClearStack() 
{
    _top == -1;
}
template <class DataType>
DataType Stack<DataType>::Top() const
{
    return _stackList[_top];
}
template <class DataType>
bool Stack<DataType>::IsStackEmpty() const
{
    if (_top == -1)
        return true;

    return false;
}
template <class DataType>
bool Stack<DataType>::IsStackFull() const
{
    if (_top == _stackSize - 1)//stack full
        return true;
    
    return false;
}
//explicit instantiation
template class Stack<int>;
template class Stack<double>;