#include <stdio.h>

int f(int n);
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}
int f(int n)
{
	int a=0;
	while(n>0)
	{
		a=a*10+n%10;
		n/=10;
	}
	return a;
}
