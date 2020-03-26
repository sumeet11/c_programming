#include<stdio.h>
void fun1(int val);
void fun2(int *ref,int size);

int main()
{
int a[5]={1,2,3,4,5};
	fun1(a[3]);
	fun2(a,5);
	printf("\n");

return 0;
}
void fun1(int val)
{
printf("value receive is %d  \n",val);

}
  
  void fun2(int *ref,int size)
  {
  int i=0;
  for(i=0;i<size;i++)
  {
  printf("%d",*(ref+i));
  }
 }
