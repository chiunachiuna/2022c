#include <stdio.h>

int main()
{
	int a[10];

	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int f=0;
	for(int i=0;i<10;i++)
	{
		if(a[i]<a[f])
		{
			f=i;
		}
	}
	int s=60*60*1.2/a[f];
	printf("%d %d\n",f+1,s);
	return 0;
}
