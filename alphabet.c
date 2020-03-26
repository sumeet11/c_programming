#include<stdio.h>

char check(char ch)
{
    if(ch>='a'&& ch<='z'||ch>=97&&ch<=122)
    {
        printf("\n %c is aplhabet",ch);
    }
    else if(ch>=65&& ch<=90)
    {
        printf("\n %c is Alphabet",ch);
    }
    else
    {
        printf("\n %c is not alphabet",ch);
    }
    
}
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    check(ch);
    return 0;
}