#include <iostream>

class Test
{
private:
    int value;
public:
    Test();
    Test(int in);
    ~Test();
    Test operator+(Test const& now);
    void print() {std::cout << value << std::endl;}
    friend std::ostream & operator<< (std::ostream &s, Test now)
    {
        s << now.value << std::endl;
        return s;
    }
};
Test Test::operator+ (Test const& now)
{
    int ans = value + now.value;
    Test answer(ans);
    return answer;
}
Test::Test(/* args */): value(1){}
Test::Test(int in): value(in) {}
Test::~Test() {}

int main(void)
{
    Test t1, t2(99), t3;
    t3 = t1 + t2;
    //t3.print();
    std::cout << t3;
    return 0;
}