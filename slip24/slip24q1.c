#include<stdio.h>
#include "cir_queue.h"
 int main()
{ int ch,no;
init();
do
{
printf("\n1.Add \n2.Delete \n0.Exit\n");
printf("Enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nEnter element");
scanf("%d",&no);
Add(no);
break;
case 2:if(isempty()==1)
printf("\n Queue is empty");
else
{
printf("deletedelement is %d",Delete());
break;
}
case 0:break;
case 4:printf("Elemenent at peek %d ",peek());
break;
default:printf("Invalid choice");
}
}while(ch!=0);
}
