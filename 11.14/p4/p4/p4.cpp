// p4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		n[i] = 0;
	}
	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i < 10; i++) {
		printf("%7d%13d\n", i,n[i]);
	}
	system("pause");
	return 0;
}
