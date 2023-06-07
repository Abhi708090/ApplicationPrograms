
#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1;
    
    obj1.no = 11;
    obj1.ptr =NULL;
    

    printf("%d",obj1.no);



    return 0;
}