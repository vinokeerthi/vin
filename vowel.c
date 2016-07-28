#include<stdio.h>
#include<conio.h>
int main()
{
	char v;
	int i;
	char a[5]={'a','e','i','o','u'};
	scanf("%c",&v);
	for(i=0;i<5;i++)
	{
	if(v==a[i])
	{
		printf("vowel");
		break;
  }
    else
    {
    	printf("consonant");
    	break;
	}
	
	}
    
    
    return 0;
}
