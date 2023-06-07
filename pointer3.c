#include<stdio.h>
int main()
{

    int No=11;
    int *p=&No;
    int *q=&No;
  
     printf("%d\n",*p);//11
     printf("%d\n",*q);//11
     printf("%d\n",p);//100
     printf("%d\n",&No);//100
       *p = 39;//Change the value by pointer
     printf("%d\n",No);
}