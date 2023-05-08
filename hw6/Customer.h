#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
protected:
    const char *f_name;
    const char *l_name;
    const char *town;
    
public:
    Customer(const char*, const char*, const char*);
    Customer(Customer &c);//copy from other
    virtual ~Customer();
    virtual void christmasPresent(void);//f_name, l_name, town
};

class OrdinaryCustomer:public Customer
{
protected:
    const char *beer_brand;
public:
    OrdinaryCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]);
    OrdinaryCustomer(OrdinaryCustomer &c);//copy from other 
    ~OrdinaryCustomer();

    void christmasPresent(void);//beer_brand 
};

class PremiumCustomer:public Customer
{
protected:
    const char *wine_brand;
public:
    PremiumCustomer(const char*, const char*, const char*, const char*);
    PremiumCustomer(PremiumCustomer &c);
    ~PremiumCustomer();

    void christmasPresent(void);//wine_brand
};





#endif