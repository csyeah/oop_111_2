#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
class Customer
{
    
protected:
    static int count_of_Customer;
    const int num_of_Customer;
    const std::string f_name;
    const std::string l_name;
    const std::string town;
    //const char *f_name;
    //const char *l_name;
    //const char *town;
    
public:
    Customer(const std::string& f, const std::string& l, const std::string& t);
    Customer(Customer &c);//copy from other
    virtual ~Customer();
    virtual void christmasPresent(void);//f_name, l_name, town
};

class OrdinaryCustomer:public Customer
{
    static int count_of_Ordinary;
    const int num_of_Ordinary;
protected:
    const std::string beer_brand;
    //const char *beer_brand;
public:
    //OrdinaryCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]);
    OrdinaryCustomer(const std::string&, const std::string&, const std::string&, const std::string&);
    OrdinaryCustomer(OrdinaryCustomer &c);//copy from other 
    ~OrdinaryCustomer();
    void christmasPresent(void);//beer_brand 

    void print_new(); // print serial number
};

class PremiumCustomer:public Customer
{
    static int count_of_Premium;
    const int num_of_Premium;
protected:
    const std::string wine_brand;
    //const char *wine_brand;
public:
    PremiumCustomer(const char*, const char*, const char*, const char*);
    PremiumCustomer(PremiumCustomer &c);
    ~PremiumCustomer();

    void christmasPresent(void);//wine_brand

    void print_new(); // print serial number
};
//initalize the counter
/*
int Customer::count_of_Customer = 0;
int OrdinaryCustomer::count_of_Ordinary = 0;
int PremiumCustomer::count_of_Premium = 0;
*/
#endif