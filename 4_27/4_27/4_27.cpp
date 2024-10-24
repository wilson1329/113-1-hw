// 4_27.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int a,b,c;
int main()
{
	for  (a = 1; a <= 500; a++)
	{
		for (b = a; b <= 500; b++)
		{
			for (c = b; c <= 500; c++)
			{
				if (a * a + b * b == c * c) {
					printf("%d %d %d is one of the Pythagorean Triples\n", a, b, c);
				}
			}
		}
	}
}


