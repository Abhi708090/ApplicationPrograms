
#include<stdio.h>

int main()
{
   int no=111;
   int *ptr=NULL;

   ptr=&no;

   printf("%d",*ptr);

    return 0;
}