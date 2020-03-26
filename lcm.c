#include<stdio.h>

int lcm(int a,int b)
{
     int lcm=(a>b)?a:b;
    while(1)
    {
       
        if(lcm%a==0 &&lcm%b==0 )
        {
            printf("\nthe Lcm of %d,%d is %d",a,b,lcm);
            break;
        }
        lcm++;
    }
}
int main()
{
    int a,b;
    printf("\n enter the value of a,b");
    scanf("%d%d",&a,&b);

    lcm(a,b);
    return 0;

}