#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int matrix_array[2][2];
public:
    Matrix(void);
    Matrix(int arr[][2]);
    ~Matrix();
};



#endif