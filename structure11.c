#include<stdio.h>
struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{

    struct Demo *head;

    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no=11;
    obj2.no=21;
    obj3.no=31;

    obj1.ptr=&obj2;
     obj2.ptr=&obj3;
      obj3.ptr=NULL;

      head=&obj1;

      printf("%d",*(obj1.ptr));   
      printf("%d",sizeof obj1);   
       
  
      return 0;

}