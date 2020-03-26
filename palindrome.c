#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
printf("entet the string\n");
scanf("%s",str);
int first=0;
int result;
int len=strlen(str);
int end=len-1;
	while(first<=end)
	{	if(str[first]!=str[end])
		{
		result=1;
		}
		first++;
		end--;
	}
	if(result==1)
	printf("string is not palindrome\n");
	else
	printf("string is  pd\n");
return 0;
}
