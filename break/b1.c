//We want to do only even No. sum//
#include<stdio.h>
void main()
{
    int i,sum=0,a;
    for(i=1; i<=5; i++)
    {
        printf("Enter a No: ");
        scanf("%d",&a);
        if(a%2==0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("Sum =%d\n",sum);
    printf("End of programme:");
}