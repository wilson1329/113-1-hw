// 2_31.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int i;
int main()
{
	printf("number\tsqare\tcube\n");
		for ( i = 0; i <= 10; i++)
		{
			printf("%d\t%d\t%d\n", i, i*i, i*i*i);
		}
}

