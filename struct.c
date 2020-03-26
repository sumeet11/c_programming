#include<stdio.h>
#include<string.h>
 struct student
 {
 int roll;
 char name[30];
 float percent;
 
 };
 int main()
 {
 int n;
 printf("enter the number of records you want to insert ");
 scanf("%d /n",&n);
 struct student s[n];
	 for(int i=0;i<=10;i++)
	 { printf("\nroll:-");
	  scanf("%d",&s[i].roll);
	  printf("\nname:-");
	 scanf("%s",s[i].name);
	 printf("\npercent:-");
	 scanf("%f",&s[i].percent);
	 }
 return 0;
 
 
 }
