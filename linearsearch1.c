/*Create a random array of n integers. Accept a value x from user and use linear search
algorithm to check whether the number is present in the array or not and output the position if
the number is present.*/
#include<stdio.h>
int main()
{ 
  int a[100],i,n,flag=0,key;
  printf("enter limit::");
  scanf("%d",&n);
  printf("\nenter numbers::");
  for (i=0;i<n;i++)
  { 
     scanf("%d",&a[i]);
     }
 printf("enter key to search::");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
    if (a[i]==key)
    {
    flag=1; 
    break;
    }
      }
 if(flag==1)
 printf("\nkey is found");
  else
  printf("\nkey not found");
  }
  
