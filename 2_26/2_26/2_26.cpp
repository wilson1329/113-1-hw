// 2_26.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int a, b;
int main()
{
	printf("Please type in two integers\n");

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	
	if (a % b == 0 ) {
		printf("%d is a mulitple of %d", a, b);
	}
	else
	{
		printf("%d isn't a mulitple of %d", a, b);
	}
}

