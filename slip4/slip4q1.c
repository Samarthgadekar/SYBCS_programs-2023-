/*Q1. Read the ‘n’ numbers from user and sort using bubble sort. */
#include<stdio.h>
   int main()
{
	int a[100],n,i;
	void bubble(int a[100],int n);
	printf("enter limit :");
	scanf("%d",&n);
	
	printf("enter n number : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	bubble(a,n);
}
	
	
	void bubble(int a[100],int n)
	{
		int i,t,pass;
		for(pass=1;pass<n;pass++)
		{
			for(i=0;i<n-pass;i++)
			{
				if(a[i]>a[i+1])
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
			}
		}
		
		printf("\nsorted no=");
		for(i=0;i<n;i++)
		printf("%d",a[i]);
		
	}


