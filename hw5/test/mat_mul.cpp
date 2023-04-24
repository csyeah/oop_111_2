#include <iostream>


int main(void)
{
    int arr1[2][2] = {{3,1}, {4,2}};
    int arr2[2][2] = {{5,6}, {8,7}};

    int ans[2][2] = {{0,0},{0,0}};

    /*
        a b     e f
        c d     g h
    */
    //a*e+b*g   a*f+b*h
    //c*e+d*g   c*f+d*h
    //a(0,0)*b(0,0)
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                ans[i][j] += arr1[i][k] * arr2[k][j];

    for (int i = 0; i < 2; i++)
        std::cout << ans[i][0] << " " << ans[i][1] << std::endl;
        
    return 0;
    
}