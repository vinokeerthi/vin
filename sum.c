#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,sum=0;
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
