/*Sort a random array of n integers (accept the value of n from user) in
ascending order by using quick sort algorithm.*/
#include<stdio.h>
int partition(int a[10], int lb,int ub)
{
int up,dn,temp,pivot;
up=ub;
dn=lb+1;
pivot=a[lb];
do
{
while((a[dn]<pivot)&&(dn<=ub))
dn++;
while((a[up]>pivot)&&(up>lb))
up--;
if(dn<up)
{
temp=a[dn];
a[dn]=a[up];
a[up]=temp;
}
   }
   while(dn<up);
   a[lb]=a[up];
   a[up]=pivot;
   return up;
   }
  void quicksort(int a[10],int lb,int ub)
  {
    int j;
    if(lb<ub)
    {
    j=partition(a,lb,ub);
    quicksort(a,lb,j-1);
    quicksort(a,j+1,ub);
    }
    }
  void main()
  {
  int a[10],n,i,j;
  printf("\n how many element::");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("enter the array element::");
  scanf("%d",&a[i]);
  }
  quicksort(a,0,n-1);
  printf("\nthe sorted output is:");
  for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   }
   
   
