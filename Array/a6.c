#include<stdio.h>
void main()
{
    int i, number[200], odd=0, even=0;
    printf("Enter Array Element: ");
    for(i=0; i<=10; i++)
    {
        scanf("%d",&number[i]);
        if(number[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }

    }
    printf("Total even element=%d\nTotal odd element=%d\n",even,odd);
    printf("***Thank You***");
}