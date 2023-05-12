#include <stdio.h>
int main()
{
	int n,m=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		if(n%i==0){
			m+=i;
			}
	printf("%d",m);
}
