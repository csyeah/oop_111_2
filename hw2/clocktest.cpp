#include<time.h>
#include<iostream>

struct timespec diff(struct timespec start, struct timespec end)
{
    struct timespec tmp;
    if ((end.tv_nsec - start.tv_nsec) < 0)
    {
        tmp.tv_sec = end.tv_sec - start.tv_sec - 1;
        tmp.tv_nsec = 1000000000 + end.tv_nsec - start.tv_nsec;
    }
    else
    {
        tmp.tv_sec = end.tv_sec - start.tv_sec;
        tmp.tv_nsec = end.tv_nsec - start.tv_nsec;
    }
    return tmp;
}
int main(void)
{
    struct timespec time1, time2;
    int tmp = 0;

    clock_gettime(CLOCK_MONOTONIC, &time1);
    for (int i = 0; i < 50000; i++)
        tmp++;
    clock_gettime(CLOCK_MONOTONIC, &time2);
    

    std::cout << diff(time1, time2).tv_sec << ":" << diff(time1, time2).tv_nsec << std::endl;
    return 0;
}