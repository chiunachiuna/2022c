#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);

	for(int i=0;i<=a;i++)
	{
		if(i*i==a)
		{
			printf("%d",i);
			return 0;
		}

	}
	printf("0");
}
