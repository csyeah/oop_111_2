#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
protected:
private:
    /* data */
public:
    Customer(/* args */);
    ~Customer();
};

class OrdinaryCustomer:public Customer
{
private:
    /* data */
public:
    OrdinaryCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]);
    ~OrdinaryCustomer();
};

class PremiumCustomer:public Customer
{
private:
    /* data */
public:
    PremiumCustomer(const char*, const char*, const char*, const char*);
    ~PremiumCustomer();
};





#endif