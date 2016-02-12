#include<stdio.h>
int substring(char str[]){
		int t,s=0,i=1,j=0,max=0;
	while(str[i]!='\0')
	{
		t=1;
		j=i-1;
		while(j>s)
		{
			if(str[i]==str[j])
				break;
			j--;
			t++;
		}
		if(t>max)
		{
			max=t;
		}
		s=j;
		i++;
	}
	return m;
}
int main()
{
	char str[50];
	int max;
	printf("Enter a string:\n");
	scanf("%s",str);
	max = substring(str);
	printf("Longest substring without repeat is of length: %d\n",max);
	return 0;
}
