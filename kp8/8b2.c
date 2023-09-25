#include<stdio.h>
void main()
{
	int n=199,i=101;
	while(i<=n)
	{
		if(i%7==0 && i%5!=0)
		{
			printf("%d,",i);
		}
		i++;
	}
}
