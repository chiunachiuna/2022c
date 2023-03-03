//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!

#include <stdio.h>
#include <string.h>

int main()
{
	char line[30];
	scanf("%s",line);

	int N=strlen(line);
	int bad=0;

	for(int  i=0;i<N;i++)
	{
		if(line[i]!=line[N-1-i]) bad=1;
	}
	if(bad==1)printf("它不是迴文\n");
	else printf("它是迴文\n");
}
