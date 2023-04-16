#include "Stack.h"

int main(int argc, char *argv[])
{
    Stack s;
    for (int i = 0; i < 10; i++)
    {
        s.Push(i);
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << s.Pop() << std::endl;
    }
    if (s.IsStackEmpty())
        std::cout << "stack is empty" << std::endl;

    return 0;
}