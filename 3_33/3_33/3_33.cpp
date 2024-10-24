// 3_33.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int length,height,i,j;
int main()
{
	printf("Please enter the length of the rectangle (more than three)\n");
	scanf_s("%d", &length);
	printf("Please enter the height of the rectangle (more than three)\n");
	scanf_s("%d", &height);
	for ( i = 0; i < length; i++)
	{
		printf("*");
	}
	printf("\n");
	for ( j = 0; j < height-2; j++)
	{
		for ( i = 0; i < length; i++)
		{
			if (i == 0 || i == length - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (i = 0; i < length; i++)
	{
		printf("*");
	}
}


