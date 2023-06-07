#include<stdio.h>
int main()
{

    int Arr[5]={10,20,30,40,50};
    int *p=&(Arr[1]);
    int *q=&(Arr[3]);

    printf("%d\n",Arr);//arr base address
    printf("%d\n",&Arr);//arr base address
    printf("%d\n",&(Arr[0]));//arr 0 address
    printf("%d\n",*p);//20
    printf("%d\n",*q);     //40
    printf("%d\n",*p+2); //22
    printf("%d\n",p+3);//addrss of 20+12
  
    printf("%d\n",p);
    printf("%d\n",q);
     printf("%d\n",q-2);//address of 3rd 40-8
    printf("%d\n",q-p);//2

return 0;
}