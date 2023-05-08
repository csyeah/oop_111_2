#include "Customer.h"
#include <iostream>
#include <cstdlib>
//constructor & destructor
Customer::Customer(const char *f, const char *l, const char *t):
    f_name(f), l_name(l), town(t) {}

Customer::~Customer()
{
    std::cout << "destruct Customer" << std::endl;
}

OrdinaryCustomer::OrdinaryCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]):
    Customer(first_name, last_name, residence), beer_brand(line) {}

OrdinaryCustomer::~OrdinaryCustomer()
{
    std::cout << "destruct OrdinaryCustomer" << std::endl;
}

PremiumCustomer::PremiumCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]):
    Customer(first_name, last_name, residence), wine_brand(line) {}

PremiumCustomer::~PremiumCustomer()
{
    std::cout << "destruct PremiumCustomer" << std::endl;
}
//others
void Customer::christmasPresent()
{

}