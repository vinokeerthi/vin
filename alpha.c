#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>=65)&&(a<=90))
	{
		printf("alphabet");
		
	}
	else if((a>=97)&&(a<=122))
	{
		printf("alphabet");
		
	}
	else
	{
		printf("not an alphabet");
		
	}
	return 0;
}
