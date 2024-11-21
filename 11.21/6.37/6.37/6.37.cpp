#include <stdio.h>

// 定義遞迴函數以尋找陣列的最大值
int recursiveMaximum(int arr[], int size) {
    if (size == 1) {
        // 遞迴基礎條件：當陣列大小為 1 時返回該值
        return arr[0];
    }

    // 將最後一個元素與遞迴調用剩餘元素的最大值進行比較
    int max_of_rest = recursiveMaximum(arr, size - 1);
    return (arr[size - 1] > max_of_rest) ? arr[size - 1] : max_of_rest;
}

int main() {
    int arr[] = { 3, 5, 7, 2, 8, -1, 4, 10, 12 }; // 測試用陣列
    int size = sizeof(arr) / sizeof(arr[0]);   // 計算陣列大小

    printf("陣列中的最大值為：%d\n", recursiveMaximum(arr, size));

    return 0;
}