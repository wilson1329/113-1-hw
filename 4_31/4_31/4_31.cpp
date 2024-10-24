// 4_31.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int input,i,j,up,down;
int main()
{
    printf("Please enter the layer of the diamond (odd only): ");
    scanf_s("%d", &input);
	up = input / 2 + 1;
	down = input - up;
	/*printf("\n%d", up);
	printf("\n%d\n", down);
	*/
	for ( i = 1; i <= up; i++)
	{
		for (j = up-i; j >= 1; j--)
		{
			printf(" ");
		}
		for ( j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下層是上層的反邏輯(除了列印符號)
	for (i = down; i >= 1; i--)
	{
		for (j = 1; j <= down-i+1; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


