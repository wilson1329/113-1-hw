// 5_36.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

void hanoi(int n, char from/*起始*/, char to/*終點*/, char aux/*輔助*/) {
    if (n == 1) {
        printf("將盤子 1 從 %c 移到 %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, aux, to);
    printf("將盤子 %d 從 %c 移到 %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("請輸入盤子的數量：");
    scanf_s("%d", &n);

    printf("移動過程如下：\n");
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

