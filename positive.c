#include<stdio.h>
int check(int no)
{
    if(no>0)
    {
       return 1;
    }
    else
    {
        return -1;
    }
    
}
int main()
{
    int no;
    printf("\n enter the number");
    scanf("%d",&no);
    int ch=check(no);
    if(ch>0)
    {
         printf("\n %d is positive",no);
    }
    else
    {
        printf("\n%d number is negative",no);
    }
    
    return 0;
}