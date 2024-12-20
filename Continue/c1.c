#include<stdio.h>
void main()
{
    int i, sum=0, a;
    for(i=1; i<=10; i++)               //sum of odd no//
    {
        printf("Enter a no: ");
        scanf("%d",&a);
        if(a%2==0)
        {
            continue;
        }
        sum=sum+a;
    }
    printf("sum=%d\n",sum);
    printf("End of programme: ");
}