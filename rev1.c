#include<stdio.h>
int main()
{
 int a[]={1,2,3,4,5};
 int front=0;
 int rear=4;
 while(front<rear)
 {
   int temp=a[front];
   a[front]=a[rear];
   a[rear]=temp;
   front++;
   rear--;
  }  
    for(int i=0;i<5;i++)
    {
    printf("reverse is %d\n",a[i]);
    }
 
 }



