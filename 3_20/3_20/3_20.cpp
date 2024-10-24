// 3_20.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int input;
float rate;
int main()
{
	do {
		printf("\nPlease enter how much hour have you worked (enter -1 to exit) : ");
		scanf_s("%d", &input);
		if (input != -1)
		{
			printf("\nPlease enter the hour rate : ");
			scanf_s("%f", &rate);
			if (input>40)
			{
				printf("\nYour salary is : %.2f", (input + float( input - 40 )/2) * rate);
			}
			else
			{
				printf("\nYour salary is : %.2f", input * rate );
			}
			
		}
		else {
			break;
		}
	} while (input != -1);
}


