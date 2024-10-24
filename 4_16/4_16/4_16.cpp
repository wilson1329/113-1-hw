// 4_16.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int func1(),func2(), func3(), func4();
int length = 10;
int i,j;
int main()
{
    func1();
    printf("\n");
    func2();
    printf("\n");
    func3();
    printf("\n");
    func4();
}
int func1() {
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n"); 
    }
    return 0;
}
int func2() {
    for (int i = length; i >=1 ; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}
int func3() {
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length-i; j++) {
            printf("%s", " ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}
int func4() {
    for (int i = length; i >=1 ; i--) {
        for (int j = 1; j <= length-i; j++) {
            printf("%s", " ");
        }
       
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        } 
        printf("\n");
    }
    return 0;
}


