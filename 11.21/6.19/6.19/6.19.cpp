// 6.19.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rolls 36000
#define sides 6


int main()
{
	int dice1[] = { 1,2,3,4,5,6 };
	int dice2[] = { 1,2,3,4,5,6 };
	int result[13] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < rolls; i++) {
		int dice1 = rand() % sides + 1; //1~6
		int dice2 = rand() % sides + 1; //1~6
		int sum = dice1 + dice2;         
		result[sum]++;                
	}
	printf("Sum\tFrequency\tProbability\n");
	for (int i = 2; i <= 12; i++) {
		double probability = (double)result[i] / rolls;
		printf("%d\t%d\t\t%.2f%%\n", i, result[i], probability * 100);
	}

	return 0;
}




