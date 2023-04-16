#include <iostream>
#include <fstream>
#include "account.h"
#include "bank.h"

Bank::Bank(/* args */):
    num_array(0), bank_name(""){}

Bank::~Bank()
{/*std::cout << "destruct" << std::endl;*/}

void Bank::read_accounts(char *file_name)
{

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