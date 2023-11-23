#include<stdio.h>
#include"cststack.h"
int main()
{
init();
char str[20];
int i;
printf("Enter String: ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
push(str[i]);
}
printf("Reversed string: ");
while(!isempty())
{
printf("%c",pop());
}
}
