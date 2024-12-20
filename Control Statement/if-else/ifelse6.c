#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
         case 'e':
          case 'i':
           case 'o':
            case 'u':
            printf("Vowel");
            break;
            default:
            printf("Not vowel");
        
    }
    printf("\nEnd of programme: ");
}