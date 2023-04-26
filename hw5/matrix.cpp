#include <iostream>
#include <cstdbool>
#include "matrix.h"

Matrix::Matrix(void) : matrix_array{1,0,1,0} //Identity matrix
{}
Matrix::Matrix(int arr[2][2]) : matrix_array{{arr[0][0], arr[0][1]}, {arr[1][0], arr[1][1]}} //Array initialization
{}
Matrix::~Matrix() {}

int Matrix::determinant()//The integer determinant of the matrix object (ad - bc)
{
    int det = matrix_array[0][0] * matrix_array[1][1];
    det -= matrix_array[0][1] * matrix_array[1][0];
    return det; 
}

Matrix Matrix::operator+ (Matrix const& new_Matrix)//new_Matrix represent right operand
{
    int ans_array[2][2];

    for (int i = 0; i < 2; i++)//row i
        for (int j = 0; j < 2; j++)//column j
            ans_array[i][j] = matrix_array[i][j] + new_Matrix.matrix_array[i][j];
    
    Matrix ans_Matrix(ans_array);
    return ans_Matrix;
}
Matrix Matrix::operator*(int in)//integer representing the right operand of the scalar multiplication
{
    int ans_array[2][2];

    for (int i = 0; i < 2; i++)//row i
        for (int j = 0; j < 2; j++)//column j
            ans_array[i][j] = matrix_array[i][j] * in;

    Matrix ans_Matrix(ans_array);
    return ans_Matrix;
}
Matrix Matrix::operator*(Matrix const& new_Matrix)//matrix * matrix
{
    int ans_array[2][2];
    //multipe two matrix
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                ans_array[i][j] += matrix_array[i][k] * new_Matrix.matrix_array[k][j];
    
    Matrix ans_Matrix(ans_array);
    return ans_Matrix;
}
bool Matrix::operator==(Matrix const& new_Matrix) const
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            if (matrix_array[i][j] != new_Matrix.matrix_array[i][j])
                return false;
        }

    return true;
}
bool Matrix::operator!=(Matrix const& new_Matrix) const
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            if (matrix_array[i][j] != new_Matrix.matrix_array[i][j])
                return true;
        }

    return false;
}
std::ostream & operator<< (std::ostream &o, Matrix const& new_Matrix)
{
    o <<  "[["
      << new_Matrix.matrix_array[0][0] << ", "
      << new_Matrix.matrix_array[0][1] << "], [" 
      << new_Matrix.matrix_array[1][0] << ", "
      << new_Matrix.matrix_array[1][0] << "]]";
}
Matrix operator*(int in, Matrix const& new_Matrix)
{
    int ans_array[2][2];
    
    for (int i = 0; i < 2; i++)//row i
        for (int j = 0; j < 2; j++)//column j
            ans_array[i][j] = in * new_Matrix.matrix_array[i][j];
    
    Matrix ans_Matrix(ans_array);
    return ans_Matrix;
}