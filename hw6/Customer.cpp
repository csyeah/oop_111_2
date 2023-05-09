#include "Customer.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

//constructor & destructor

//first called
Customer::Customer(const std::string& f, const std::string& l, const std::string& t):
    f_name(f), l_name(l), town(t), num_of_Customer(++count_of_Customer) 
{
    
}
Customer::Customer(Customer &c):
    f_name(c.f_name), l_name(c.l_name), town(c.town), num_of_Customer(++count_of_Customer)
{
    std::cout << "Calling a copy constructor to copy data from: ";
    std::cout << c.f_name << " " << c.l_name 
              << ", at " << c.town << "." << std::endl;
    //This is the 2nd OrdinaryCustomer, and 2nd Customer. 
}
//last called
Customer::~Customer()
{
    std::cout << "destruct Customer" << std::endl;
}
//first called
OrdinaryCustomer::OrdinaryCustomer(const std::string& f, const std::string& l, const std::string& t, const std::string& line):
    Customer(f, l, t), beer_brand(line), num_of_Ordinary(++count_of_Ordinary) {}
OrdinaryCustomer::OrdinaryCustomer(OrdinaryCustomer &c):
    Customer(c), beer_brand(c.beer_brand), num_of_Ordinary(++count_of_Ordinary) {}
//last called
OrdinaryCustomer::~OrdinaryCustomer()
{
    std::cout << "destruct OrdinaryCustomer" << std::endl;
}

PremiumCustomer::PremiumCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]):
    Customer(first_name, last_name, residence), wine_brand(line), num_of_Premium(++count_of_Premium) {}
PremiumCustomer::PremiumCustomer(PremiumCustomer &c):
    Customer(c), wine_brand(c.wine_brand), num_of_Premium(++count_of_Premium) {}
PremiumCustomer::~PremiumCustomer()
{
    std::cout << "destruct PremiumCustomer" << std::endl;
}
//others
void Customer::christmasPresent()//f_name, l_name, town
{
    std::cout << f_name << " " << l_name << ", at ";
    std::cout << town << ".\n";
}