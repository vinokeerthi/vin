#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n1,n2;
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<=n2;i++)
	{
		if(n1%2!=0)
		{
			printf("%d",n1);
			n1++;
		}
		else
		{
			n1++;
		}
	}
	return 0;
}
