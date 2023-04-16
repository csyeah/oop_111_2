#include <iostream>
#include <fstream>
#include <cstdlib>
#include "account.h"
#include "bank.h"

Bank::Bank(/* args */):
    num_array(0), bank_name(""){}

Bank::~Bank()
{/*std::cout << "destruct" << std::endl;*/}

void Bank::read_accounts(char *file_name)
{
    std::ifstream file_in;
    file_in.open(file_name);
    if (file_in.fail())//cant't read the file
    {
        std::cout << "can't read the file" << std::endl;
        exit(1);
    }
    //read the file
    file_in.getline(bank_name, 31);//get the bank name
    
    while (!file_in.eof())//read until EOF
        file_in >> account_objects[num_array].account_number >> account_objects[num_array].name >> account_objects[num_array++].balance;
    
    //finish reading
    bubble_sort();//sort the objects
    
    file_in.close();//close the file
}

void Bank::process_transactions(char *file_name)
{

}
void Bank::print()
{
    std::cout << "Account listing for " << bank_name 
              << " " << std::endl;
    
    for (int i = 0; i < num_array; i++)
        account_objects[i].print();
}
void Bank::bubble_sort()//sort by account number
{
    for (int i = 0; i < num_array - 1; i++)
    {
        for (int j = 0; j < num_array - i - 1; j++)
        {
            int first = atoi(account_objects[j].get_account_number());
            int second = atoi(account_objects[j+1].get_account_number());
            if (first > second)
            {
                Account tmp = account_objects[j];
                account_objects[j] = account_objects[j+1];
                account_objects[j+1] = tmp;
            }
        }
    }
    
}