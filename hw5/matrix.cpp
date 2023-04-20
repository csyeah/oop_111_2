#include <iostream>
#include "matrix.h"

Matrix::Matrix(void) : matrix_array{1,0,1,0} {}
Matrix::Matrix(int arr[2][2]) : matrix_array{{arr[0][0], arr[0][1]}, {arr[1][0], arr[1][1]}} {}

Matrix::~Matrix()
{
}
