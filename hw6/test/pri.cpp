#include <iostream>

class base
{

public:
    int num;
    base(/* args */);
    ~base();
};

base::base(/* args */)
{
    num = 999;
}

base::~base()
{
    std::cout << "de the base" << std::endl;
}
class der:private base
{
private:
    /* data */
public:
    der(/* args */);
    ~der();
    void set_num(int in) {
        num = in;
    }
    void print()
    {
        std::cout << num << std::endl;
    }
};

der::der(/* args */)
{
}

der::~der()
{
    std::cout << "de the der" << std::endl;
}
int main(void)
{
    der d1;
    d1.set_num(5);
    d1.print();
    return 0;
}