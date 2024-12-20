#include<stdio.h>
void main()
{
    int i, array1[5],array2[5],array3[5],sumarray[5];
    printf("Enter 1st Array element: ");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&array1[i]);
    }

    for(i=0; i<=4; i++)
    {
        printf("Array element at index at=%d is=%d\n",i,array1[i]);
    }

    printf("\nEnter 2nd Array Element: \n");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&array2[i]);
    }

    printf("\n\n");
    for(i=0; i<5; i++)
    {
        printf("Array element at index no=%d is=%d\n",i,array2[i]);
    }
    
    printf("\nEnter 3rd Array Element:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&array3[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("Array element at index no=%d is=%d\n",i,array3[i]);
    }

    printf("\nSum of Array1, Array2 & Array3\n");
    for(i=0; i<5; i++)
    {
        sumarray[i]=array1[i]+array2[i]+array3[i];
    }

    for(i=0; i<5; i++)
    {
        printf("Sum of arry element at index no=[%d] is=%d\n",i,sumarray[i]);
    }

    printf("***Thank You***");
}