#include<stdio.h>
#include<conio.h>
void main()
{
    int i,array[5];
    printf("Enter array Elements: ");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<=4; i++)
    {
        printf("[%d]=%d\n",i,array[i]);
    }
    printf("\n***End of programme:***");

}