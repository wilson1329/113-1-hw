// 5_29.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>




//最大公因數
    int gcd(int m, int n) {
        if (n == 0) {
            return m;
        }
        else {
            return gcd(n, m % n);
        }
    }
    //最小公倍數
    int lcm(int m, int n) {
        return m * n / gcd(m, n);
    }

    int main() {
        int m, n;

        while (1) {
            printf("please enter two numbers (separate them with space bar)：");
            scanf_s("%d %d", &m, &n);

            if (m == 0 || n == 0) {
                break;
            }
            else {
                printf("lcm：%d\n", lcm(m, n));
            }
        }
        return 0;
    }


