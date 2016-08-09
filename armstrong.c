#include<stdio.h>
#include<conio.h>
int main()
{
	int num,ans=0,r,number,n=0;;
	scanf("%d",&num);
	number=num;
	while(number!=0)
	{
		r=number%10;
		ans=ans+(r*r*r);
		number=number/10;
	}
	if(ans==num)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
return 0;
}
