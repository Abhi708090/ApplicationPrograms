#include<stdio.h>
int main()
{

int No=11;
int * iptr=&No;

char ch='A';
char * cptr=&ch;

double d=89.89;
double * dptr=&d;

printf("%d\n",No); //11
printf("%c\n",ch);//AA
printf("%f\n",d);//89.89

printf("%d\n",&No);
printf("%d\n",&ch);
printf("%d\n",&d);

printf("%d\n",&iptr);
printf("%d\n",&cptr);
printf("%d\n",&dptr);

printf("%d\n",*iptr);
printf("%c\n",*cptr);
printf("%f\n",*dptr);

printf("%d\n",iptr);
printf("%d\n",cptr);
printf("%d\n",dptr);



return 0;



}