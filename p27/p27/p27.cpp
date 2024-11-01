// p27.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>

long factorial(long n);

int main()
{
    int i;
	for ( i = 0; i <= 10 ; i++)
	{
		printf("%2d!=%1d\n", i, factorial(i));
	}
	system("pause");
}
long factorial(long n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * (factorial(n - 1));
	}
}


