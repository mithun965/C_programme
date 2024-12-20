#include<stdio.h>
void main()
{
    int i, j, array[2][3];
    printf("Enter Elemnt of Array: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Array element at index no[%d][%d] is=%d\n",i,j,array[i][j]);
        }

    }
}