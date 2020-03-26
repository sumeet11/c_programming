#include<stdio.h>
int main()
{
int a [5];
printf("enter element \n");
for (int i=0;i<5;i++)
{
scanf("%d \n",&a[i]);
}
 
for(int i=5;i>=0;i--)
 {
 int b=a[i];
 printf("%d \n",b);
 
 }

return 0;

}
