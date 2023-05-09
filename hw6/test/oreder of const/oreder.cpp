#include <iostream>

class Order
{
private:
    static int count;
    int id;
public:
    Order(/* args */);
    ~Order();
    int get_id()
    {
        return id;
    }
    int get_count()
    {
        return count;
    }
};

Order::Order(/* args */):id(++count)
{
    std::cout << "this is Oreder constructor" << std::endl;
    
}

Order::~Order()
{
    std::cout << "Order destruct" << std::endl;
}
class Der:public Order
{
public:
    Der(){std::cout << "this is der constructor" << std::endl;}
    ~Der() {std::cout << "der destruct" << std::endl;}
};
int Order::count = 0;
int main(void)
{
    Der a1, a2;
    std::cout << a1.get_id() << std::endl;
    std::cout << a2.get_id() << std::endl;
    std::cout << a2.get_count() << std::endl;
    return 0;
}