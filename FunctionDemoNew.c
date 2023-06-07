#include <stdio.h>

int Addition(int A,int B)
{
    int result= A+B;
    return result;
}

int main()
{
    int No1=10;
    int No2=20;
    int Ans=0;

    Ans=Addition(No1,No2);
    printf("%d",Ans);

    return 0;
}
