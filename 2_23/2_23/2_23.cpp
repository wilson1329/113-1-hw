// 2_23.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int a, b, c,i;
int temp;
int main()
{
     printf("Please type in three integers and make sure to press space key to separate them\n");
     scanf_s("%d %d %d", &a, &b, &c);
     for ( i = 0; i < 3; i++)
     {
         if (a < b) {
             temp = a;
             a = b;
             b = temp;
         }
         if (b < c) {
             temp = b;
             b = c;
             c = temp;
         }

     }

     printf("%d is the largest and %d is the smallest", a, c);
}

