// p23.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum status{Continue,Won,Lost};
int roll();

int main()
{
    int sum;
    int point;
    enum status gamestatus;

    srand(time(NULL));
    sum = roll();
    switch (sum)
    {
    case 7:
    case 11:
        gamestatus = Won;
        break;
    case 2:
    case 3:
    case 12:
        gamestatus = Lost;
        break;

    default:
        gamestatus = Continue;
        point = sum;
        printf("your point is %d\n", point);
        break;
    }
    while (gamestatus == Continue) {
        sum = roll();
        if (sum == point) {
            gamestatus = Won;
        }
        else if (sum==7) {
            gamestatus = Lost;
        }
        
    }
    if (gamestatus == Won) {
        printf("player wins\n");

    }
    else {
        printf("player loses\n");
    }
    system("pause");
    return 0;
}
int roll() {
    int d1;
    int d2;
    int worksum;

    d1 = 1 + (rand() % 6);
    d2 = 1 + (rand() % 6);
    worksum = d1 + d2;
    printf("player rolled %d+%d=%d\n", d1, d2, worksum);
    return worksum;
}


