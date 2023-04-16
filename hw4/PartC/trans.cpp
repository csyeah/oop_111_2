#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
int main()
{
    std::ifstream file_in("accounts.txt");
    
    char name[31];
    file_in.getline(name, 31);
    std::cout << name << std::endl;
    char tmp_account_number[11], tmp_name[21];
    double tmp_balance;
    char line[100];
    
    int i = 0;
    /*
    while (file_in.getline(line, 100))
    {  
        //file_in >> tmp_account_number >> tmp_name >> tmp_balance;
        std::cout << line << std::endl;
        char *token;
        token = strtok(line, " ");

        while (token != NULL)
        {
            
        }
        
    }//std::cout << tmp_account_number << " " << tmp_name << " " << tmp_balance << std::endl;
    */
    while (1)
    {   file_in >> tmp_account_number;
        file_in >> tmp_name;
        char another[21];
        file_in >> another;
        file_in >> tmp_balance;
        strcat(tmp_name, " ");
        strcat(tmp_name, another);
        if (file_in.eof()) break;
        std::cout << tmp_account_number << " " << tmp_name << " " << tmp_balance << std::endl;
    }
    return 0;
}