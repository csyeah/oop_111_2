#ifndef BANK_H
#define BANK_H

class Bank
{
private:
    /* data */
public:
    Bank(/* args */);
    ~Bank();
    void print();
    void read_accounts(char file_name);
    void process_transactions(char file_name);
};



#endif