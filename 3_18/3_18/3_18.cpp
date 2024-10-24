// 3_18.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
float input;
int main()
{
	do {
		printf("\nplease enter your sales in dollar (enter -1 to exit) : ");
		scanf_s("%f", &input);
		if (input != -1)
		{
			printf("\nYour salary is : %.2f",200+(input*0.09));
		}
		else {
			break;
		}
	} while (input != -1);
}

