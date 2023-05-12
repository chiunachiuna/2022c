#include <stdio.h>

int main()
{
	int a,b,i,c=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%3==0)
		c+=i;
	}
	printf("%d",c);
	return 0;
}
