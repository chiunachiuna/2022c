#include <stdio.h>

int main(void)
{
	int a[80],i,b,c=0;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
	}
	scanf("%d",&b);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==b)
		c++;
	}
	printf("%d\n",c);
	return 0;
}
