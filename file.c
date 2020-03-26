#include<stdio.h>
#include<curses.h>
int main()
{
FILE *f;
char ch;
f=fopen("e.txt","w+");
fprintf(f,"enter the data");
fputs("this is anitehr content",f);
fclose(f);
/*
while(ch==getchar()!=EOF)
{
putc(ch,f);

}
fclose(f);
f=fopen("one.txt","r");
while(ch==getch()!=EOF)
{

printf("%c",ch);
fclose(f);
}

*/
return 0;

}
