#include<stdio.h>

int main()
{

    int No=11;
    int *p=&No;
    int **q=&p;
    int ***r=&q;
    int ****a=&r;
    int *****b=&a;
    int ******c=&b;
    

printf("%d\n",sizeof(No));//4
printf("%d\n",&No);//Address of No
printf("%d\n",&a);//Address of a
printf("%d\n",No);//value of No
printf("%d\n",*p);//one step up value is 11
printf("%d\n",**q);//two step value 11
printf("%d\n",***b);//
printf("%d\n",******c);
printf("%d\n",r);
printf("%d\n",&q);


}