
#include<stdio.h>

struct Demo
{
    int no;//4
    char ch1;//1
    char ch2;//1
    float f;//4
    int i;//4
};



int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}