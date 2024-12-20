#include<stdio.h>
void main()
{
   
    
        int i, array[5];
        printf("Enter the array values ");
        for(i=0; i<=4; i++)
        {
            scanf("%d",&array[i]);
        }

        for(i=0; i<5; i++)
        {
            printf("Array element at index=%d is=%d\n",i,array[i]);
        }

        printf("\n\nReverse of Array\n\n");
        for(i=4; i>=0; i--)
        {
            printf("Array element at index=%d is=%d\n",i,array[i]);
        }
        printf("\nEnd of programme: ");
    
}