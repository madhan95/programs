#include<stdio.h>
void main()
{
	int a[100],b[100],i,j,n,element,count=0;
	printf("\n enter the number of elements");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	element=n/2;
	if(n%2==0)
	{
		for(i=element,j=0;i<=n;j++,i++)	
	{
		b[j]=a[i];
	count++;
	}
	
		for(j=count-1,i=0;j<n,i<=element;i++,j++)
		{
			b[j]=a[i];
		}
	}
	else
	{
		for(i=element+1,j=0;i<=n;j++,i++)	
	{
		b[j]=a[i];
	count++;
	}
	b[element]= a[element];
	count++;
		
		for(j=count-1,i=0;j<n,i<=element;i++,j++)
		{
			b[j]=a[i];
		}
		
	}
		
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
