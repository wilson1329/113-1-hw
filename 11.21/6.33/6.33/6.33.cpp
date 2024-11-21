#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // 避免 (low + high) 溢出

        if (arr[mid] == target) {
            return mid; // 找到目標值，返回索引
        }
        else if (arr[mid] < target) {
            low = mid + 1; // 搜尋右半部分
        }
        else {
            high = mid - 1; // 搜尋左半部分
        }
    }

    return -1; // 未找到目標值
}

int main() {
    int arr[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 }; // 必須要為有序數列
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("輸入目標值：");
    scanf_s("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("找到目標值 %d，索引為 %d\n", target, result);
    }
    else {
        printf("未找到目標值 %d\n", target);
    }

    return 0;
}