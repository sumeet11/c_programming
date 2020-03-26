#include<stdio.h>

int swap(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nafter swapping");
   printf("\na= %d",a);
    printf("\nb=%d",b);
}
int main()
{
    int a=0,b=0;
    printf("\nenter the valur of a,\n");
    scanf("%d",&a);
     printf("\nenter the valur of b,\n");
      scanf("%d",&b);
    printf("%d,%d",a,b);
    swap(a,b);
    
    return 0;
}