#include <iostream>
#include <cstdbool>
#include <cstring>
#include "account.h"

Account::Account(/* args */):
    balance(0), name(""), account_number("") {}

Account::~Account()
{}

char *Account::get_account_number()
{
    char *ch = new char[11];
    strcpy(ch, account_number);
    return ch;
}
double Account::get_balance()
{
    return balance;
}
void Account::process_deposit(double deposit)
{
    balance += deposit;
}
bool Account::process_withdrawal(double withdraw)//return false or sub the balance
{
    if (balance < withdraw)//not enough
        return false;
    
    balance -= withdraw;
    return true;
}
void Account::print()//print data member
{
    std::cout << "\nAccount Number: " << account_number;
    std::cout << "\nName: " << name;
    std::cout << "\nBalance: " << balance << std::endl;
}