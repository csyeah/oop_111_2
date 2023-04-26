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
    int determinant();
    Matrix operator+(Matrix const& new_Matrix);
    Matrix operator*(int in);
    Matrix operator*(Matrix const& new_Matrix);
    bool operator==(Matrix const& new_Matrix) const;
    bool operator!=(Matrix const& new_Matrix) const;
    friend std::ostream & operator<< (std::ostream &o, Matrix const& new_Matrix);
    friend Matrix operator*(int in, Matrix const& new_Matrix);
};



#endif