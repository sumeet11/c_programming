#include<stdio.h>
 int main()
 {
 int a[3][3];
 int i,j;
 for(i=0;i<3;i++)
 	for(j=0;j<3;j++)
 	{
 	printf("enter the element %d %d \n",i,j);
 	scanf("%d",&a[i][j]);
 	}
 for(i=0;i<3;i++)
 {
 printf("\n");
 	for(j=0;j<3;j++)
 	{
 	printf(" %d",a[i][j]);
 	
 	}
 
 }
 
 return 0;
 }
