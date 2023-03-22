#include<iostream>
#include<fstream>
#include<string.h>
int read_data(char buf[][100])
{
    const int LENGTH = 100;
    char line[LENGTH];
    int count_of_line = 0;
    std::ifstream file_in("2.txt");
    while (file_in.getline(line, LENGTH))
    {
        std::cout << "read:" << line << std::endl;
        strcpy(buf[count_of_line++], line);
    }
    return count_of_line;
}
int main(void)
{
    char buf[10][100];
    int num_line = read_data(buf);
    //std::cout << num_line << std::endl;
    for (int i = 0; i < num_line; i++)
    {
        std::cout << buf[i] << std::endl;
    }
    
    return 0;
}