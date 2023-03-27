#include"triangle.h"
int Triangle::GetSize()
{
    return length;
}
int Triangle::perimeter()
{
    
    return length * 3;
}
double Triangle::Area()
{
    const double height = pow(length, 1/3);
    const double ans = (length * height) / 2 ;
    return ans;
}
void Triangle::Draw()
{
    for (int i = 0; i < length; i++)//triangle has length level
    {
        if (i <= 1)//first two line
            for (int j = 0; j < i+1; j++)
                std::cout << border_char;
        
        else if (i == length - 1)//last line
            for (int j = 0; j < i+1; j++)
                std::cout << border_char;
        
        else
        {
            std::cout << border_char;
            for (int j = 1; j < i; j++)
                std::cout << fill_char;
            std::cout << border_char;
        }
    }
    
}
void Triangle::Grow()
{
    if (length < 39)
        length++;
}
void Triangle::Shrink()
{
    if (length > 1)
        length--;
}
void Triangle::Setborder()
{

}
void Triangle::Setfill()
{

}