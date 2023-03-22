#include<iostream>

int main(void)
{
    char line[10];
    std::cin >> line;//stop at space
    //std::getline(std::cin, line);
    std::cout << line << std::endl;
    return 0;
}