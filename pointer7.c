#include<stdio.h>

int Add(int A,int B)
{
    int Ans=0;
    Ans=A+B;

    return Ans;
}

int main()
{
    int val1=10,val2=12;
    int ret=0;
    
    int (*ptr)(int,int);//Pointer Creation

     ptr= &Add;//holds the address of function

    ret = ptr(val1,val2);// call the function by pointer


    printf("%d\n",ret);
    printf("%d\n",*ptr);
     printf("%d\n",Add);
    
    return 0;


}