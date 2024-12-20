#include<stdio.h>

char fun(void);
void main()
{
    char ch;
    ch=fun();
    printf("Value of ch=%c\n",ch);

}

char fun()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    return ch;
}