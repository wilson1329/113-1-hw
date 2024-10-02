// 2_33.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int Mileage, g_price, g_mileage, parking, toll,total;
int main()
{
	printf("Please enter your mileage per day(km)\n");
	scanf_s("%d", &Mileage);
	printf("How much does a liter of gasline cost ?\n");
	scanf_s("%d", &g_price);
	printf("How many kilometers can one liter of gasoline drive on average?\n");
	scanf_s("%d", &g_mileage);
	printf("How much does parking cost per day?\n");
	scanf_s("%d", &parking);
	printf("How much is the toll per day?\n");
	scanf_s("%d", &toll);
	total = (Mileage / g_mileage) * g_price + parking + toll;
	printf("If you drive to work every day it will cost you %d dollars per day.", total);
}


