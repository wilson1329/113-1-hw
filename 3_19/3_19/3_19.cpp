// 3_19.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
float input,rate;
int days;
int main()
{
	do {
		printf("\nPlease enter your loan principal (enter -1 to exit) : ");
		scanf_s("%f", &input);
		if (input != -1)
		{
			printf("\nPlease enter interest rate : ");
			scanf_s("%f", &rate);
			printf("\nPlease enter the term of the loan in days : ");
			scanf_s("%d", &days);
			printf("\nYour interest charge is : %.2f",input*rate*days/365);
		}
		else {
			break;
		}
	} while (input != -1);
}

