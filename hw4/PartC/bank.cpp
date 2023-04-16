#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <cstdbool>
#include "account.h"
#include "bank.h"

Bank::Bank(/* args */):
    num_array(0), bank_name(""){}

Bank::~Bank()
{/*std::cout << "destruct" << std::endl;*/}

void Bank::read_accounts(const char *file_name)
{
    std::ifstream file_in(file_name);
    //file_in.open(file_name);
    
    if (!file_in)//cant't read the file
    {
        std::cout << "can't read the file" << std::endl;
        exit(1);
    }
    //read the file
    file_in.getline(bank_name, 31);//get the bank name
    //error
    while (1)//read until EOF
    {
        
        char tmp_account_number[11], tmp_name[21], last_name[21];
        double tmp_balance;
        file_in >> tmp_account_number >> tmp_name >> last_name >>tmp_balance;
        strcat (tmp_name, " ");
        strcat (tmp_name, last_name);
        account_objects[num_array++].set_account(tmp_account_number, tmp_name, tmp_balance);
        
        if (file_in.eof()) //EOF
            break;
    }
    bubble_sort();//sort the objects
    
    file_in.close();//close the file
}

void Bank::process_transactions(const char *file_name)
{
    std::ifstream file_in(file_name);
    
    if (!file_in)//fail to read the file
    {
        std::cout << "can't read the file" << std::endl;
        exit(2);
    }
    //print header
    std::cout << "\nTransaction Report" << std::endl;
    std::cout << "Date\tAccount\t\tType\tAmount\tNew Balance" << std::endl;
    //read the file
    while (1)
    {
        char tmp_date[10], tmp_account[11], tmp_type;
        double tmp_amount;
        file_in >> tmp_date >> tmp_account >> tmp_type >> tmp_amount;
        

        int index = binary_search(tmp_account);
        if (index == -1)//account not found
        {
            std::cout << tmp_date << "\t" << tmp_account << "\t";
            std::cout << tmp_type << "\t" << tmp_amount << "\t";
            std::cout << "*** Invalid account number ***" << std::endl;
        }
        else
        {
            std::cout << tmp_date << "\t" << tmp_account << "\t";
            std::cout << tmp_type << "\t" << tmp_amount << "\t";
            if (tmp_type == 'D')
            {
                account_objects[index].process_deposit(tmp_amount);
                std::cout << account_objects[index].get_balance() << std::endl;
            }
            else if (tmp_type == 'W')
            {
                if (!account_objects[index].process_withdrawal(tmp_amount))
                    std::cout << "** Insufficient funds ***" << std::endl;
                else
                    std::cout << account_objects[index].get_balance() << std::endl;
            }
            
        }
        if (file_in.eof()) break;//EOF
    }
}
void Bank::print()
{
    std::cout << "Account listing for " << bank_name 
              << " " << std::endl;
    
    for (int i = 0; i < num_array; i++)
        account_objects[i].print();
}
int Bank::binary_search(char *target)
{
    int left = 0, right = num_array;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        char mid_account[11];
        strcpy(mid_account, account_objects[mid].get_account_number());
        if (strcmp(target, mid_account) == 0)//found
            return mid;
        else if (strcmp(target, mid_account) < 0)//target is smaller
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
void Bank::bubble_sort()//sort by account number
{
    for (int i = 0; i < num_array - 1; i++)
    {
        for (int j = 0; j < num_array - i - 1; j++)
        {
            int first = atoi(account_objects[j].get_account_number());
            int second = atoi(account_objects[j+1].get_account_number());
            std::cout << first << " " << second << std::endl;
            if (first > second)
            {
                Account tmp = account_objects[j];
                account_objects[j] = account_objects[j+1];
                account_objects[j+1] = tmp;
            }
        }
    }
    
}