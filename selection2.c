#include<stdio.h>
int main()
{
    int Std=0;
    printf("Enter a Standard:\n");
    scanf("%d",&Std);

    switch(Std)
    {
    case 1: printf("Your exam at 1 pm\n");
             break;

    case 2: printf("Your exam at 2 pm\n");
             break;

     case 3: printf("Your exam at 3 pm\n");
             break;

    case 4: printf("Your exam at 4 pm\n");
             break;
    
    default: printf("Invalid Standard");
    
    }
    return 0;
}