#include<stdio.h>

char check (char ch)
{
    if(ch>=65 && ch<=90)
    {
        printf("\n %c is in the upper case",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\n %c is in the lower case ",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("/n %c is the number",ch);
    }
    else
    {
        printf("\n%c is the  symbol",ch);
    }
}
int main()
{
    char ch;
    printf("\n enter the input ");
    scanf("%c",&ch);
    check(ch);
    return 0;
}