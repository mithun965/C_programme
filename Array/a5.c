#include<stdio.h>
void main()
{
    int i, number[10], even=0, odd=0;
    printf("Enter Element of Array: ");
    for(i=0; i<=10; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0; i<=10; i++)
    {
        printf("Array element at index no=%d is=%d\n",i,number[i]);
    }
    for(i=0; i<=10; i++)
    {
        if(number[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("Total Even element=%d\nTotal Odd element=%d\n",even,odd);
    printf("***Thank You***");
}