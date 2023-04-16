#ifndef BANK_H
#define BANK_H
#include "account.h"
class Bank//:public Account
{
private:
    char bank_name[31];
    Account account_objects[20];
    int num_array;
public:
    Bank(/* args */);
    ~Bank();
    void print();
    void read_accounts(char *file_name);
    void process_transactions(char *file_name);
    
    void bubble_sort();
    int binary_search(char *target);
};

#endif