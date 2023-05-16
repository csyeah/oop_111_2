#include "Customer.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

//init the static
int Customer::count_of_Customer = 0;
int OrdinaryCustomer::count_of_Ordinary = 0;
int PremiumCustomer::count_of_Premium = 0;
int Customer::total_num_of_Customer = 0;
int OrdinaryCustomer::total_num_of_Ordinary = 0;
int PremiumCustomer::total_num_of_Premium = 0;

//constructor & destructor
//first called
Customer::Customer(const std::string& f, const std::string& l, const std::string& t):
    f_name(f), l_name(l), town(t), num_of_Customer(++count_of_Customer) 
{
    ++total_num_of_Customer;
}

Customer::Customer(Customer &c):
    f_name(c.f_name), l_name(c.l_name), town(c.town), num_of_Customer(++count_of_Customer)
{
    ++total_num_of_Customer;
    std::cout << "Calling the copy constructor to copy data from: ";
    std::cout << c.f_name << " " << c.l_name 
              << ", at " << c.town << "." << std::endl;
    //This is the 2nd OrdinaryCustomer, and 2nd Customer. 
}


OrdinaryCustomer::OrdinaryCustomer(const std::string& f, const std::string& l, const std::string& t, const std::string& line):
    Customer(f, l, t), beer_brand(line), num_of_Ordinary(++count_of_Ordinary) 
{
    ++total_num_of_Ordinary;
    //!!! watch for 11~13 !!!
    int check_val = num_of_Ordinary % 10;
    if (check_val == 1)
    {
        if (num_of_Ordinary == 11)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "st "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //2nd
    else if (check_val == 2)
    {
        if (num_of_Ordinary == 12)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "nd "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //3rd
    else if (check_val == 3)
    {
        if (num_of_Ordinary == 13)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "rd "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //4th
    else
    {
        std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
}
OrdinaryCustomer::OrdinaryCustomer(OrdinaryCustomer &c):
    Customer(c), beer_brand(c.beer_brand), num_of_Ordinary(++count_of_Ordinary) 
{
    ++total_num_of_Ordinary;
    //!!! watch for 11~13 !!!
    int check_val = num_of_Ordinary % 10;
    if (check_val == 1)
    {
        if (num_of_Ordinary == 11)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "st "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //2nd
    else if (check_val == 2)
    {
        if (num_of_Ordinary == 12)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "nd "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //3rd
    else if (check_val == 3)
    {
        if (num_of_Ordinary == 13)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "rd "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //4th
    else
    {
        std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
}

PremiumCustomer::PremiumCustomer(const char first_name[], const char last_name[], const char residence[], const char line[]):
    Customer(first_name, last_name, residence), wine_brand(line), num_of_Premium(++count_of_Premium) 
{
    ++total_num_of_Premium;
    //!!! watch for 11~13 !!!
        
    //!!! watch for 11~13 !!!
    //1st
    int check_val = num_of_Premium % 10;
    if (check_val == 1)
    {
        if (num_of_Premium == 11)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "st "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //2nd
    else if (check_val == 2)
    {
        if (num_of_Premium == 12)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "nd "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //3rd
    else if (check_val == 3)
    {
        if (num_of_Premium == 13)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "rd "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //4th
    else
    {
        std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
}
PremiumCustomer::PremiumCustomer(PremiumCustomer &c):
    Customer(c), wine_brand(c.wine_brand), num_of_Premium(++count_of_Premium) 
{
    ++total_num_of_Premium;   
        
    //!!! watch for 11~13 !!!
    //1st
    int check_val = num_of_Premium % 10;
    if (check_val == 1)
    {
        if (num_of_Premium == 11)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "st "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //2nd
    else if (check_val == 2)
    {
        if (num_of_Premium == 12)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "nd "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //3rd
    else if (check_val == 3)
    {
        if (num_of_Premium == 13)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "rd "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //4th
    else
    {
        std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
}

//destructor
Customer::~Customer()//last called
{
    //std::cout << "destruct Customer" << std::endl;
    std::cout << "and " << --total_num_of_Customer << " Customer.";
}

OrdinaryCustomer::~OrdinaryCustomer()
{
    std::cout << "Survived " << --total_num_of_Ordinary << " OrdinaryCustomer, ";
    //std::cout << "destruct OrdinaryCustomer" << std::endl;
}

PremiumCustomer::~PremiumCustomer()
{
    std::cout << "Survived " << --total_num_of_Premium << " PremiumCustomer, ";
    //std::cout << "destruct PremiumCustomer" << std::endl;
}

//others
void Customer::christmasPresent()//f_name, l_name, town
{
    std::cout << f_name << " " << l_name << ", at ";
    std::cout << town << ".\n";
}
void OrdinaryCustomer::christmasPresent()
{
    Customer::christmasPresent();
    
    //customer info
    //!!! watch for 11~13 !!!
    int check_val = num_of_Ordinary % 10;
    if (check_val == 1)
    {
        if (num_of_Ordinary == 11)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "st "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //2nd
    else if (check_val == 2)
    {
        if (num_of_Ordinary == 12)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "nd "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //3rd
    else if (check_val == 3)
    {
        if (num_of_Ordinary == 13)
            std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        else
            std::cout << "This is the " << num_of_Ordinary << "rd "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //4th
    else
    {
        std::cout << "This is the " << num_of_Ordinary << "th "
                  << "OrdinaryCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //present
    std::cout << "Please send one bottle " << beer_brand
              << " using ordinary present wrapper." << std::endl;
}
void PremiumCustomer::christmasPresent()
{
    Customer::christmasPresent();
    
    //customer info
        
    //!!! watch for 11~13 !!!
    //1st
    int check_val = num_of_Premium % 10;
    if (check_val == 1)
    {
        if (num_of_Premium == 11)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "st "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //2nd
    else if (check_val == 2)
    {
        if (num_of_Premium == 12)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "nd "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //3rd
    else if (check_val == 3)
    {
        if (num_of_Premium == 13)
            std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        else
            std::cout << "This is the " << num_of_Premium << "rd "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //4th
    else
    {
        std::cout << "This is the " << num_of_Premium << "th "
                  << "PremiumCustomer, ";
        
        if (11 <= num_of_Customer && num_of_Customer <= 13)
            std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        else
        {    
            int second_check_val = num_of_Customer % 10;
            if (second_check_val == 1)
                std::cout << "and " << num_of_Customer << "st Customer." << std::endl;
            else if (second_check_val == 2)
                std::cout << "and " << num_of_Customer << "nd Customer." << std::endl;
            else if (second_check_val == 3)
                std::cout << "and " << num_of_Customer << "rd Customer." << std::endl;
            else
                std::cout << "and " << num_of_Customer << "th Customer." << std::endl;
        }
    }
    //present
    std::cout << "Please send one bottle " << wine_brand
              << " using premium present wrapper." << std::endl;
}

