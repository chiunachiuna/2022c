#include <stdio.h>

int main()
{
	int a,b=0,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b+=i*i;
	}
	printf("%d",b);
	return 0;
}
