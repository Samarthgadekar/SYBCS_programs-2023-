// linear search without using flag......
#include<stdio.h>
int main()
{
  int a[10],i,n,key,num;
  printf("enter limit::");
  scanf("%d",&n);
  printf("\nenter numbers::");
  for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
       }
  printf("\nenter key to search::");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  { 
    if(a[i]==key)
    {
    break;
     }
     }
  if(i==n)
  printf("\nkey is not found");
   else
   printf("\nkey is found");
      }
