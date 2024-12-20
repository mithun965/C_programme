#include<stdio.h>
void main()
{
    int i, makrs[5], sum=0;
    float avg=0;
    printf("Enter Element of Array: ");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&makrs[i]);
    }

    printf("\n\n");

    for(i=0; i<=4; i++)
    {
        printf("Student makrs at index no=%d is=%d\n",i,makrs[i]);
    }
    
    printf("\n\n");

    for(i=4; i>=0; i--)
    {
        printf("Student makrs at index no=%d is=%d\n",i,makrs[i]);
    }

    for(i=0; i<=4; i++)
    {
        sum=sum+makrs[i];
    }
    
    avg=sum/5;

    printf("Sum of marks=%d\nAvg of makrs=%f\n",sum,avg);
    printf("****Thank You****");
}