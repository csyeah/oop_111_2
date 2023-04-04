#include"triangle.h"
//!!!! area draw
int Triangle::GetSize()
{
    return length;
}
int Triangle::Perimeter()
{
    
    return length * 3;
}
double Triangle::Area()
{
    //double half_length = length / 2;
    //const double height = sqrt(3) * half_length;
    const double height = sqrt(3) * length / 2;
    const double ans = (length * height) / 2 ;
    return ans;
}
void Triangle::Draw()
{
    for (int i = 0; i < length; i++)//triangle has length level
    {
        if (i <= 1)//first two line
        {
            for (int j = 0; j < length - i - 1; j++)//fill with space
                std::cout << " ";
            for (int j = 0; j < i+1; j++)
                std::cout << border_char << " " ;
            std::cout << std::endl;
        }
        else if (i == length - 1)//last line
        {
            for (int j = 0; j < length - i - 1; j++)
                std::cout << " ";
            for (int j = 0; j < i+1; j++)
                std::cout << border_char << " ";
            std::cout << std::endl;
        }
        else
        {
            for (int j = 0; j < length - i - 1; j++)//fill with space
                std::cout << " ";
            std::cout << border_char << " ";
            for (int j = 1; j < i; j++)
                std::cout << fill_char << " ";
            std::cout << border_char << " ";
            std::cout << std::endl;
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
void Triangle::SetBorder(char ch)
{
    if (ch >= 33 && ch <= 126)
        border_char = ch;
    else//illegal border , set to default
        border_char = '#';
}
void Triangle::SetFill(char ch)
{
    if (ch >= 33 && ch <= 126)
        fill_char = ch;
    else//illegal fill, set to default
        fill_char = '*';
}
void Triangle::Summary()
{
    std::cout << "Size of traingle's side = " << length << " units.\n";
    std::cout << "Perimeter of traingle = " << Perimeter() << " units\n";
    std::cout << "Area of triangle = " << std::fixed << std::setprecision(2) << Area() << " square units.\n";
    std::cout << "Triangle looks like:\n";
    Draw();
}