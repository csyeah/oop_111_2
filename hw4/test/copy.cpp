#include <iostream>

int main(void)
{
    int *list;
    list = new int[2]{0,1};
    int *new_list;
    new_list = new int[4]{9,9,9,9};
    for (int i = 0; i < 2; i++)
    {
        new_list[i] = list[i];
    }
   
    delete(list);
    list = new_list;
    for (int i = 0; i < 4; i++)
    {
        std::cout << list[i] << "\n";
    }
    delete(list);
    delete(new_list);
    return 0;
}