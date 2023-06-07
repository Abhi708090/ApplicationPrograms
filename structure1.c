#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;

};

int main()
{
    struct Demo obj1;// allocate memory 12 byte
    struct Demo obj2;//12byte

    obj1.i=12;
    obj1.f=90.9;
    obj1.j=51;

    obj2.i=14;
    obj2.f=60.60;
    obj2.j=45;

    printf("%d\n",obj1.i);  //12
    printf("%f\n",obj1.f);  //90.9
    printf("%d\n",obj1.j);  //51

     printf("%d\n",obj2.i);  //14
     printf("%f\n",obj2.f);  //60.60
     printf("%d\n",obj2.j);  //45
 


    return 0;

}