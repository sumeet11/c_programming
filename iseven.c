#include<stdio.h>
#include<stdbool.h>

int check(int n)
{
    return(!(n&1));
}

int main()
{
    int n;
    printf("\n enter the number");
    scanf("%d",&n);
    check(n)?printf("even"):printf("odd");
    return 0;
}