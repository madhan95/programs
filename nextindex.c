#include<stdio.h>
void main()
{
	int i,n,k,index,flag=0;
	int a[100];
	printf("\n enter tha size of th array");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{
			flag=1;
			if(a[i]<a[i+1])
			{
				index=i;
				break;
			}
			else if(a[i]==a[i+1])
			{
				index=i+1;
			}
		}
	}
	if(flag==0)
	{
		printf("\n-1");
	}
	else
	{
		printf("\nThe index is : %d ",index); 
	}
}
			
