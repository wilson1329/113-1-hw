// 5_28.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
char letter;
int main()
{
    printf("please enter a letter:\n");
    scanf_s("%c", &letter);
    if (int(letter) >= 97) {
        printf("%c", letter - 32);
    }
    else
    {
        printf("%c", letter + 32);
    }
}

