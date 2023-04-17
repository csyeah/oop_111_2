#ifndef BANK_H
#define BANK_H
#include "account.h"

typedef class Account ACC;
class Bank
{
private:
    char bank_name[31];
    ACC account_objects[20];
    int num_array;
public:

    Bank(/* args */);
    ~Bank();
    void print();
    void read_accounts(const char *file_name);
    void process_transactions(const char *file_name);
    //new
    void bubble_sort();
    int binary_search(char *target);
};

#endif