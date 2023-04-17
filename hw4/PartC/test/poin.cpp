#include <iostream>
#include <cstring>
#include <stdlib.h>
class poin
{
private:
    char line[21];
public:
    poin(){}
    ~poin(){}
    void set_name(const char *ch){strcpy(line, ch);}
    char *wow();
};
char *poin::wow()
{
    char *ch;
    strcpy(ch, line);
    return ch;
}


int main()
{
    poin a;
    a.set_name("11345");
    int num = atoi(a.wow());
    std::cout << num << std::endl;
    return 0;
}