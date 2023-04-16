#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    char account_number[11];
    char name[21];
    double balance;
public:
    Account(/* args */);
    ~Account();
    char *get_account_number();//return account number
    double get_balance();//return balance
    void process_deposit(double deposit);//double deposit amount and add it to the balance for the bank account.
    bool process_withdrawal(double withdraw);//false. Otherwise, subtract the amount and return true.
    void print();
};



#endif