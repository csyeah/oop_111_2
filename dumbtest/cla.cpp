#include<iostream>

class Cla
{
private:
    const int num;
    const char ch;
public:
    Cla(int in, char inc = '@'):
        num(in > 39 ? 39: in < 1 ? 1: in), ch(inc){}
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
    Cla test(0, '#');
    Cla test2(111);
    test.print();
    test2.print();
    return 0;
}
