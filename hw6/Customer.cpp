#include "Customer.h"
#include <iostream>
#include <cstdlib>
Customer::Customer(/* args */)
{
}

Customer::~Customer()
{
    std::cout << "destruct Customer" << std::endl;
}



OrdinaryCustomer::OrdinaryCustomer(const char first_name[], const char last_name[], const char residence[], const char line[])
{
}

OrdinaryCustomer::~OrdinaryCustomer()
{
    std::cout << "destruct OrdinaryCustomer" << std::endl;
}

PremiumCustomer::PremiumCustomer(const char first_name[], const char last_name[], const char residence[], const char line[])
{
}

PremiumCustomer::~PremiumCustomer()
{
    std::cout << "destruct PremiumCustomer" << std::endl;
}
