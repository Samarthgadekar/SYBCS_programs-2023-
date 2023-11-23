#include<stdio.h>
#include<stdlib.h>
#include"ststack.h"
int main()
{
int n,i=0,ch;
init();
do
{
 printf("\n1.push \n2.pop \n3.chech empty or not \n4.check full or not \n5.Peek ");
printf("\n\teneter your choice ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter elements");
scanf("%d",&n);
push(n);
break;
case 2:printf("\ndeleted elements :%d",pop());
break;
case 3:if(isempty()==1)
printf("stack is empty");
else
printf("stack is not empty");
break;
case 4:if(isfull()==1)
printf("stack is full");
else
printf("stack is not full");
break;
case 5:printf("\ntop of elements:%d",peek());
break;
case 0: break;
}
}while(ch!=0);
}
