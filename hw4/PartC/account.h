#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
private:
    char account_number[11];
    char name[21];
    double balance;
    //friend class Bank;//so the bank.cpp can store data 
public:
    Account(/* args */);
    ~Account();
    char *get_account_number();//return account number
    double get_balance();//return balance
    void process_deposit(double deposit);//double deposit amount and add it to the balance for the bank account.
    bool process_withdrawal(double withdraw);//false. Otherwise, subtract the amount and return true.
    void print();
    //new
    void set_account(char *tmp_account_number, char *tmp_name, double tmp_balance);
};

#endif