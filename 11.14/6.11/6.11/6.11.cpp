#include <stdio.h>

void optimizedBubbleSort(int arr[], int n) {
    int i, j;
    int swapped; // 用於檢查是否發生交換
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // 每次開始新的迭代時，重置交換標誌
        // 每次內層迭代減少比較次數
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交換 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // 標記發生了交換
            }
        }
        // 如果沒有發生交換，表示陣列已排序，提前終止
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
   int arr[]={0};
    printf("請輸入陣列大小: ");
    scanf_s("%d", &n);

 
    printf("請輸入 %d 個整數元素: \n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    printf("原始陣列: \n");
    printArray(arr, n);

    optimizedBubbleSort(arr, n);

    printf("排序後的陣列: \n");
    printArray(arr, n);
    return 0;
}