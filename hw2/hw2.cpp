#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//input 9
//every license 20 fish
//1 fish per 1000 feet^3 (lake depth 20feet)
//1/4 fish left
const int LINE_LENGTH = 50;
//calculate the time program used
struct timespec diff(struct timespec start, struct timespec end)
{
    struct timespec tmp;
    if ((end.tv_nsec - start.tv_nsec) < 0)
    {
        tmp.tv_sec = end.tv_sec - start.tv_sec - 1;
        tmp.tv_nsec = 1000000000 + end.tv_nsec - start.tv_nsec;
    }
    else
    {
        tmp.tv_sec = end.tv_sec - start.tv_sec;
        tmp.tv_nsec = end.tv_nsec - start.tv_nsec;
    }
    return tmp;
}
//use strtok to split array into int
int Split_array(int coordinate[10], char buf[LINE_LENGTH], int index_of_coordinate)
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
//calculate the number of fish
int Num_of_fishes(int coordinate[10])
{
    int sum = 0;
    for (int i = 0; i < 9; i++)//calculate the area
    {
        if (i == 0 || i == 8)
            sum += coordinate[i];
        else if (i % 2 == 1)
            sum += 4 * coordinate[i];
        else
            sum += 2 * coordinate[i];
    }
    sum = sum / 3 * 200 * 20;
    int num_of_fish = sum / 1000;
    return num_of_fish;//fish in lake
    
}

int main(int argc, char *argv[])
{
    struct timespec time1, time2;
    clock_gettime(CLOCK_MONOTONIC, &time1);//get the start time
    
    std::cout << "start" << std::endl;
    //read the file
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
    while (file_in.getline(input_arr, LINE_LENGTH))//read the file line by line until EOF
        strcpy(data[count_line++], input_arr);
    
    std::cout << "read data from argv[1] successfully" << std::endl;
    
    //get the coordinate
    int coordinate[9], index_of_coordinate = 0;
    for (int i = 0; i < count_line; i++)//convert string into int line by line 
        index_of_coordinate = Split_array(coordinate, data[i], index_of_coordinate);
    
    if (index_of_coordinate != 9)//check if there is 9 input coordinate
    {
        std::cout << "error, wrong number of coordinate" << std::endl;
        exit(3);
    }
    
    //calculate the answer
    int num_fish = Num_of_fishes(coordinate);
    int num_license = num_fish * 3 / 4 / 20;//calculate the maximun license
    
    std::cout << "The maximun number of license can be sold is:" << num_license <<std::endl;
    
    clock_gettime(CLOCK_MONOTONIC, &time2);//get the end time
    std::cout << "time spent=>" << diff(time1, time2).tv_sec << ":" << diff(time1, time2).tv_nsec << std::endl;
    
    return 0;
}