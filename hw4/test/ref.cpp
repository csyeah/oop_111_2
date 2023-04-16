#include <iostream>
static int x = 5;
void replace(int &item)
{
    
    x = item;
}
int main(void)
{
    int *a;
    a = new int[3]{0,1,2};
    int r = 0;
    replace(r);
    std::cout << x << std::endl;
    return 0;
}