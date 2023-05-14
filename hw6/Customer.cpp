#include "Customer.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

//constructor & destructor

//first called
Customer::Customer(const std::string& f, const std::string& l, const std::string& t):
    f_name(f), l_name(l), town(t), num_of_Customer(++count_of_Customer) {}

Customer::Customer(Customer &c):
    f_name(c.f_name), l_name(c.l_name), town(c.town), num_of_Customer(++count_of_Customer)
{
    std::cout << "Calling a copy constructor to copy data from: ";
    std::cout << c.f_name << " " << c.l_name 
              << ", at " << c.town << "." << std::endl;
    //This is the 2nd OrdinaryCustomer, and 2nd Customer. 

}


OrdinaryCustomer::OrdinaryCustomer(const std::string& f, const std::string& l, const std::string& t, const std::string& line):
    Customer(f, l, t), beer_brand(line), num_of_Ordinary(++count_of_Ordinary) 
{
    //This is the 2nd
    //1st
    if (count_of_Ordinary == 1)
    {
        std::cout << "This is the 1st OrdinaryCustomer, ";
        if (count_of_Customer == 1)
            std::cout << "and 1st Customer." << std::endl;
        else if (count_of_Customer == 2)
            std::cout << "and 2nd Customer." << std::endl;
        else if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //2nd
    else if (count_of_Ordinary == 2)
    {
        std::cout << "This is the 2nd OrdinaryCustomer, ";
        if (count_of_Customer == 2)
            std::cout << "and 2nd OrdinaryCustomer." << std::endl;
        else if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //3rd
    else if (count_of_Ordinary == 3)
    {
        std::cout << "This is the 3rd OrdinaryCustomer, ";
        
        if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //4th
    else
    {
        std::cout << "This is the " << count_of_Ordinary << "th "
                  << " OrdinaryCustomer, ";
        std::cout << "and " << count_of_Customer << "th Customer";
        std::cout << std::endl;
    }
}
OrdinaryCustomer::OrdinaryCustomer(OrdinaryCustomer &c):
    Customer(c), beer_brand(c.beer_brand), num_of_Ordinary(++count_of_Ordinary) {}



PremiumCustomer::PremiumCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]):
    Customer(first_name, last_name, residence), wine_brand(line), num_of_Premium(++count_of_Premium) {}
PremiumCustomer::PremiumCustomer(PremiumCustomer &c):
    Customer(c), wine_brand(c.wine_brand), num_of_Premium(++count_of_Premium) {}

//destructor

Customer::~Customer()//last called
{
    std::cout << "destruct Customer" << std::endl;
    std::cout << "and" << count_of_Customer-- << "Customer." << std::endl;
}

OrdinaryCustomer::~OrdinaryCustomer()
{
    std::cout << "Survived" << count_of_Ordinary-- << "OrdinaryCustomer, ";
    std::cout << "destruct OrdinaryCustomer" << std::endl;
}

PremiumCustomer::~PremiumCustomer()
{
    std::cout << "Survived" << count_of_Premium-- << "PremiumCustomer, ";
    std::cout << "destruct PremiumCustomer" << std::endl;
}
//others
void Customer::christmasPresent()//f_name, l_name, town
{
    std::cout << f_name << " " << l_name << ", at ";
    std::cout << town << ".\n";
}
void OrdinaryCustomer::christmasPresent()
{
    std::cout << "This ";
}
void PremiumCustomer::christmasPresent()
{}

void OrdinaryCustomer::print_new()
{
    //1st
    if (count_of_Ordinary == 1)
    {
        std::cout << "This is the 1st OrdinaryCustomer, ";
        if (count_of_Customer == 1)
            std::cout << "and 1st Customer." << std::endl;
        else if (count_of_Customer == 2)
            std::cout << "and 2nd Customer." << std::endl;
        else if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //2nd
    else if (count_of_Ordinary == 2)
    {
        std::cout << "This is the 2nd OrdinaryCustomer, ";
        if (count_of_Customer == 2)
            std::cout << "and 2nd OrdinaryCustomer." << std::endl;
        else if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //3rd
    else if (count_of_Ordinary == 3)
    {
        std::cout << "This is the 3rd OrdinaryCustomer, ";
        
        if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //4th
    else
    {
        std::cout << "This is the " << count_of_Ordinary << "th "
                  << " OrdinaryCustomer, ";
        std::cout << "and " << count_of_Customer << "th Customer";
        std::cout << std::endl;
    }
}
void PremiumCustomer::print_new()
{
    //1st
    if (count_of_Premium == 1)
    {
        std::cout << "This is the 1st PremiumCustomer, ";
        if (count_of_Customer == 1)
            std::cout << "and 1st Customer." << std::endl;
        else if (count_of_Customer == 2)
            std::cout << "and 2nd Customer." << std::endl;
        else if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //2nd
    else if (count_of_Premium == 2)
    {
        std::cout << "This is the 2nd OrdinaryCustomer, ";
        if (count_of_Customer == 2)
            std::cout << "and 2nd Customer." << std::endl;
        else if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //3rd
    else if (count_of_Premium == 3)
    {
        std::cout << "This is the 3rd PremiumCustomer, ";
        
        if (count_of_Customer == 3)
            std::cout << "and 3rd Customer." << std::endl;
        else
            std::cout << "and " << count_of_Customer << "th Customer" << std::endl;
    }
    //4th
    else
    {
        std::cout << "This is the " << count_of_Premium << "th "
                  << " OrdinaryCustomer, ";
        std::cout << "and " << count_of_Customer << "th Customer";
        std::cout << std::endl;
    }
}