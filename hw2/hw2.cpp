#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
//input 9
//every license 20 fish
//1 fish per 1000 feet^3 (lake depth 20feet)
//1/4 fish left
const int LINE_LENGTH = 50;
int split_array(int coordinate[10], char buf[LINE_LENGTH], int index_of_coordinate)//do strtok
{
    char *token;
    token = strtok(buf, " ");

    while (token != NULL)
    {   
        coordinate[index_of_coordinate++] = atoi(token);
        token = strtok(NULL, " ");
    }
    return index_of_coordinate;
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
    
    
    
    int coordinate[9], index_of_coordinate = 0;
    for (int i = 0; i < count_line; i++)//convert string into int line by line 
        index_of_coordinate = split_array(coordinate, data[i], index_of_coordinate);
    
    if (index_of_coordinate != 9)//check if there is 9 input coordinate
        std::cout << "error, wrong number of coordinate" << std::endl;
    
    for (int i = 0; i < index_of_coordinate; i++)
        std::cout << coordinate[i] << " ";
    
    std::cout << std::endl;
    

   
    
    
    return 0;
}