// 5_34.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int a,i, b;
int main()
{
    printf("please enter the base and the exponent\n");
    scanf_s("%d %d", &a, &b);
    if (a != 1 && b >= 1) {
        printf("power(%d,%d)=\n", a, b);
        for ( i = 1 ; i < b; i++)
        {
            printf("%d*", a);
        }
        printf("%d", a);
    }
    else if (a == 1) {
        printf("the result is 1\n");
    }
    else if (b == 0) {
        printf("the result is 1\n");
    }
    else if (b < 1) {
        printf("error!!\n");
    }
}

