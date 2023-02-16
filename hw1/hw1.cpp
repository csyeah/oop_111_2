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
    
    std::string line;
    std::cout << "enter the postfix expression:";
    getline(std::cin, line);
    std::cout << line << std::endl;

    stack new_stack;
    new_stack.initialize();

    int len = line.size();
    for (int i = 0; i < len; i++)
    {
        switch (line[i])
        {
        case 1:
            new_stack.push('1' - '0');
            break;
        case 2:
            new_stack.push('2' - '0');
            break;
        case 3:
            new_stack.push('3' - '0');
            break;
        case 4:
            new_stack.push('4' - '0');
            break;
        case 5:
            new_stack.push('5' - '0');
            break;
        case 6:
            new_stack.push('6' - '0');
            break;
        case 7:
            new_stack.push('7' - '0');
            break;
        case 8:
            new_stack.push('8' - '0');
            break;
        case 9:
            new_stack.push('9' - '0');
            break;
        default:
            break;
        }
    }
    
    //std::cout << "length of string:" << len << std::endl;
    //deal with 
    return 0;

}