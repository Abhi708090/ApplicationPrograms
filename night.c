#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];

    int size=0;

    int *ptr=NULL;

    printf("Enter Size of array ");

    scanf("%d\n",&size);

        ptr = (int *)malloc(sizeof(int) * size);




    free(ptr);




    return 0;

}