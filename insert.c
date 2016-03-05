#include<stdio.h>
void main()
{
	int a[100],i,j,n,element,index;
	printf("\n enter the number of elements to be inserted");
	scanf("%d",&n);
	printf("\n enter the elements to be inserted");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element to be insert");
	scanf("%d",&element);
	printf("\n enter the position to be inserted");
	scanf("%d",&index);
	for(i=n;i>index-1;i--)	
	{
		a[i]=a[i-1];
	}
		a[index-1]=element;
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
