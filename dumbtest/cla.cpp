#include<iostream>

class Cla
{
private:
    const int num;
    const char ch;
public:
    Cla(int in, char inc = '@'):
        num(in), ch(inc){}
    void print();
    ~Cla()
    {
        std::cout << "deconstructor" << std::endl;
    }
    
};
void Cla::print()
{
    std::cout << num << "," << ch << std::endl;
}
int main(void)
{
    Cla test(10, '#');
    Cla test2(111);
    test.print();
    test2.print();
    return 0;
}
