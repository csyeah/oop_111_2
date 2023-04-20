#include <iostream>

void print(int *arr[])
{
    std::cout << arr[0][0];
    std::cout << " " << arr[0][1] << std::endl;
    std::cout << arr[1][0];
    std::cout << " " << arr[1][1] << std::endl;
}

int main(void)
{
    int arr[2][2] = {{1,2}, {3,4}};
    print(arr);
    return 0;
}