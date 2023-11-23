#include<stdio.h>
#include<string.h>
#include"cststack1.h"
void main()
{
char str[20];
int count=0,i;
char ch;
printf("enter string");
scanf("%s",str);
init();
for(i=0;i<=str[i]!='\0';i++)
{
push(str[i]);
}
for (i=0;i<=strlen(str)/2;i++)
{
ch = pop();
if(ch!=str[i])
{
count++;
break;
}
}
if(count==0)
{
printf("The string is palindrome");
}
else
{
printf("The string is not palindrome");
}
}
