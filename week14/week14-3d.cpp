#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int N=strlen(a);

	for(int i=0;i<N;i++)
	{
		printf("%c",a[i]);
		if((N-1-i)%3==0&&i!=N-1)
			printf(",");

	}
}
