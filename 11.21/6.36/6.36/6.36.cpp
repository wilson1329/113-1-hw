#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // 定義一個字元陣列來儲存輸入字串

    printf("輸入一個字串：");
    fgets(input, sizeof(input), stdin); // 使用 fgets 讀取輸入字串

    int length = strlen(input); // 使用 strlen 計算字串長度

    printf("反向列印的結果為：");
    for (int i = length - 1; i >= 0; i--) { // 使用迴圈從尾到頭列印字串
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}