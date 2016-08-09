#include<stdio.h>
int main()
{
	double n,i,fact=1;
	scanf("%lf",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("%lf",fact);
	return 0;
}
