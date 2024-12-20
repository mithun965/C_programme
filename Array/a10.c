#include<stdio.h>
void main()
{
    int i, j, array[3][3];
    printf("Enter Elemnt of Array: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
ccc
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Array element at index no[%d][%d] is=%d\n",i,j,array[i][j]);
        }

    }
}