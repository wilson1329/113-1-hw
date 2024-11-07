// 5_35.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

unsigned long long fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    unsigned int n;
    printf("請輸入要顯示的費氏數列的第幾位數：");
    scanf_s("%u", &n);

    unsigned long long result = fibonacci(n);
    printf("費氏數列的第 %u 位是 %llu\n", n, result);

    return 0;
}

