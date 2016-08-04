#include<stdio.h>
int main()
{
	int n,limit,i;
	scanf("%d",&n);
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		printf("%d*%d=%d\n",i,n,i*n);
	}
	return 0;
}
