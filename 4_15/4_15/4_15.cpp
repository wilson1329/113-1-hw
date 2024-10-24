// 4_15.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
float invest = 5000;
int i, j;
float rate[5]={0.1 , 0.105 , 0.11 , 0.115, 0.12};
int main()
{

	for ( j = 0; j < 3; j++)
	{
		for ( i = 0; i < 5; i++)
		{
			printf("Your charge is %.2f", invest*rate[i]*15);
			printf("\n");
		}
		
	}
}

