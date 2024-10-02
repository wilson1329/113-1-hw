// 2_27.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
int i, j;
int main()
{
	for ( i = 1; i <= 5; i++)
	{
		for ( j = i; j < 5; j++)
		{
			printf(" ");
		}
		for ( j = 0; j < i*2-1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
}

