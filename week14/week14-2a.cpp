#include <stdio.h>

int main()
{
	int a,ans=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		ans+=i*11;
	}
	printf("%d",ans);
}
