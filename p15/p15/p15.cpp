// p15.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y, int z);

int main()
{
    int n1;
    int n2;
    int n3;
    printf("Enter three integers : ");
    scanf_s("%d %d %d", &n1, &n2, &n3);
    printf("maximum is %d\n", max(n1, n2, n3));
    system("pause");
}
int max(int x, int y, int z) {
    int max = x;
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}


