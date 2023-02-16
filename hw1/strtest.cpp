#include<iostream>
#include<string>
int main()
{
    std::string line;
    getline(std::cin, line);
    std::cout << line[3] << std::endl;
    char ch = '1' - '0';
    int a = ch;
    std::cout << "'1' - '0'=" <<a;
    return 0;
}