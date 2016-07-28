#include <stdio.h>
int main()
{
    long long num;
    int c=0;
    scanf("%lld", &num);
    while(num!=0)
    {
        num /= 10;             
        ++c;
    }

    printf("%d",c);
}
