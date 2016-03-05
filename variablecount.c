#include<stdio.h>
#include<string.h>
void main()
{
	char strin[20];
	int i,count=0,n;
	int a[20];
	printf ("\nenter the length of the string");
	scanf("%d",&n);
	printf("\n enter the string");
	for(i=0;i<n;i++)
	{
		scanf("%c",&strin[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=strin[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>64&&a[i]<91)
		{
			count++;
		}
	}
	printf("\n %d", count);	
}
	
