#include<iostream>
#include<string>
#define Max_size 50
class stack
{
    char stck[Max_size];
    int top;
public:
    void initialize();
    void push(char ch);
    char pop();
};

void stack::initialize()
{
    top = -1;
}
void stack::push(char ch)
{
    if (top == Max_size - 1)
    {
        std::cout << "stack full\n";
        return;
    }
    stck[++top] = ch;
}
char stack::pop()
{
    if (top == -1)
    {
        std::cout << "stack is empty\n";
        return 0;
    }
    char tmp = stck[top--];
    return tmp;
}
int main(void)
{
    stack s1, s2;
    s1.initialize();
    s2.initialize();

    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('1');
    s2.push('2');
    s2.push('3');

    for (int i = 0; i < 3; i++)
        std::cout << s1.pop() << " ";
    puts("");
    for (int i = 0; i < 3; i++)
        std::cout << s2.pop() << " ";
    puts("");
    return 0;
}