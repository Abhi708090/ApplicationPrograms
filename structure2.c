#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;

};

int main()
{
    struct Demo obj1={10,10.10,20};
    

    struct Demo *ptr= &obj1;

    obj1.i=10;  //. Direct member Access
    ptr->j=20;  //indirect member access

    ptr->f=10.10;

    printf("%d\n",obj1.i);  //10
     printf("%d\n",ptr->j); //20
      printf("%f\n",ptr->f); // 10.10
 
    printf("%d\n",(*ptr).j);   //20
    printf("%d",sizeof obj1);   //12



}