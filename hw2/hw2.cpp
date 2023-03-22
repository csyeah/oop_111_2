#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
//input 9
//every license 20 fish
//1 fish per 1000 feet^3 (lake depth 20feet)
//1/4 fish left
const int LINE_LENGTH = 50;
void split_array(int coordinate[10], char buf[LINE_LENGTH])//do strtok
{
    char *token;
    token = strtok(buf, " ");

    int count = 0;
    while (token != NULL)
    {   
        coordinate[count++] = atoi(token);
        token = strtok(NULL, " ");
    }
}
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "error, argc < 2" << std::endl;
        exit(1);
    }
    std::ifstream file_in(argv[1]);
    if (!file_in)
    {
        std::cout << "error, can't read the file" << std::endl;
        exit(2);
    }
    
    char input_arr[LINE_LENGTH];
    char data[10][LINE_LENGTH];
    int count_line = 0;
    while (file_in.getline(input_arr, LINE_LENGTH))
    {
        std::cout << "Read:" << input_arr << std::endl;
        strcpy(data[count_line++], input_arr);
    }
    std::cout << "read data from argv[1]" << std::endl;
    
    
    
    int coordinate[9];
    for (int i = 0; i < count_line; i++)
    {
        split_array(coordinate, data[i]);
    }
    
    //check count
    std::cout << "after strtok" << std::endl;
    
    
    return 0;
}