#include <iostream>

class Test
{
private:
    int A[2][2];
public:
    void print();
    Test(void);
    Test(int arr[2][2]);
    ~Test();
};
void Test::print() {
    std::cout << A[0][0];
    std::cout << " ";
    std::cout << A[0][1] << std::endl;
    std::cout << A[1][0];
    std::cout << " ";
    std::cout << A[1][1] << std::endl;

}
Test::Test(void): A{1,0,0,1} {}
Test::Test(int arr[2][2]): A{{arr[0][0], arr[0][1]},{arr[1][0], arr[1][1]}} {}

Test::~Test() {}

int main()
{
    int one[2][2] = {{1,2}, {3,4}};
    Test t(one);
    t.print();
    return 0;
}