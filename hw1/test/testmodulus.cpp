#include<iostream>
int main()
{
    char line[] = "5%2";
    line[0] = line[0] - '0';
    line[2] = line[2] - '0';
    int num = line[0] % line[2];
    std::cout << num << std::endl;
    return 0;
}