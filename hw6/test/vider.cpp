#include <string>
#include <iostream>

class Base
{
public:
    Base(/* args */){std::cout << "Base con" << std::endl;}
    virtual ~Base(){std::cout << "Base de" << std::endl;}
};

class Der:public Base
{
public:
    Der(/* args */)
    {
        std::cout << "Der con" << std::endl;
    }
    ~Der()
    {
        std::cout << "Der de" << std::endl;
    }
};

int main(void)
{
    Base *b = new Der();
    delete b;
    puts("");
    Der *a = new Der();
    delete a;
    
    return 0;
}


