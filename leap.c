#include<stdio.h>
int main()
{
int year;
printf("\n ENTER THE YEAR");
scanf("%d",&year);
int r=year%4;
 int r2=year%100;
 int r3=year%400;
 	if(r2==0||r3==0||r==0);	
	 printf("\n year is leap");
	 
	 if(r2>0)
	 printf("\n year is not leap");
	 
return 0;
}
