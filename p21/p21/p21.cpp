// p21.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    unsigned seed = 0;

    printf("enter seed ");
    scanf_s("%u", &seed);

    srand(seed);

    for ( i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + rand() % 6);
        if (i % 5 == 0)
            printf("\n");
    }
    system("pause");
}


