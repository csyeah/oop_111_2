#include <iostream>
#include <cstring>
class base
{
private:
    /* data */
protected:
    int id;
    char name[21];
public:
    base(int in, const char line[]);
    base():id(0){}
    int x;
    ~base(){}
    void print()
    {
        std::cout << name << " " << id << std::endl;
    }
};
base::base(int in, const char line[])
{
    id = in;
    strcpy(name, line);   
    x = 999; 
}


class der:public base
{

public:
    der();
    ~der(){std::cout << "destruct der\n";}
    void ch_name(const char*);
};
void der::ch_name(const char line[])
{
    strcpy(name, line);
}
der::der()
{}

int main(void)
{
    
    base t1(21, "hi");
    //t1.print();
    std::cout << t1.x << std::endl;
    der d1;
    d1.ch_name("max");
    d1.print();
    return 0;
}