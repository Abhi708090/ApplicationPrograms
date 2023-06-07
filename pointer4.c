#include<stdio.h>

int main()
{
int Arr[5]={10,20,30,40,50};
 int *p=&(Arr[1]);

 int *q=&(Arr[3]);

 printf("%d\n",p);// Address of p which are point 20
 printf("%d\n",q);//address of q points to element i.e 40
 printf("%d\n",*p);//20
 printf("%d\n",*q);//40
 printf("%d\n",&(Arr[1]));//20 address
 printf("%d\n",Arr); //1st element address
 printf("%d\n",&Arr);//address of 1st element
 printf("%d",sizeof(Arr));// size of array is 20



}