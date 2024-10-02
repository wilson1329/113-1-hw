// 2_21.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
void shape1();
void shape2();
void shape3();
void shape4();
int i,j;
int main()
{
	shape1();
	printf("\n");
	shape2();
	printf("\n");
	shape3();
	printf("\n");
	shape4();

}
void shape1() {
	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)
		{
			for (j = 0; j < 9; j++)
			{
				printf("*");
			}
		}
		else {
			printf("*       *");
		}
		printf("\n");
	}
}
void shape2() {
		printf("   ***\n");
		printf(" *     *\n");
	for ( i = 0; i < 5; i++)
	{
		printf("*       *\n");
	}
		printf(" *     *\n");
		printf("   ***\n");
}
void shape3() {
	printf("   *\n");
	printf("  ***\n");
	printf(" *****\n");
	for ( i = 0; i < 6; i++)
	{
		printf("   *\n");
	}
}
void shape4() {
	int n = 9; 
	int mid = n / 2; 

	// Upper part 
	for (int i = 0; i <= mid; i++) {
		for (int j = 0; j < mid - i; j++) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			if (j == 0 || j == 2 * i) {
				printf("*"); 
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	// Lower part 
	for (int i = mid - 1; i >= 0; i--) {
		for (int j = 0; j < mid - i; j++) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			if (j == 0 || j == 2 * i) {
				printf("*"); 
			}
			else {
				printf(" "); 
			}
		}
		printf("\n");
	}
}


