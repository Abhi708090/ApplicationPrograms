#include<stdio.h>
struct Hello
{
    int no;
    int x;
    struct Demo
    {
        int i;
        int f;

    }dobj1,dobj2;
}hobj;



int main()
{
hobj.no=12;
hobj.x=13;

hobj.dobj1.i=30;
hobj.dobj1.f=20.20;

hobj.dobj2.i=40;
hobj.dobj2.f=30.30;

printf("%d",hobj.dobj2.i);
printf("%d",sizeof hobj);   //24


return 0;

}