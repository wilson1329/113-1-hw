// 2_24.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int a;
int main()
{
    printf("Please type in a random integer\n");
    scanf_s("%d", &a);
    if (a % 2 == 0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
}

