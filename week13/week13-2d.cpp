#include <stdio.h>

int main(void)
{
	char a[5];
	int i,c=8,b=0;
	gets_s(a);
	for(i=0;a[i]!=0;i++)
	{
		b+=(a[i]-'0')*c;
		c/=2;
	}
	printf("%d\n",b);
	return 0;
}
