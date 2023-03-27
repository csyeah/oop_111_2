#include<iostream>

int main(void)
{
    int a;
    std::cout << "enter number(will print ! if > 39 or < 1):";
    std::cin >> a;
    char x;
    a < 1 || a > 39 ? x = '!': x = '@';
    std::cout << x << std::endl;
    return 0;
}