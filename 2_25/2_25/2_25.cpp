// 2_25.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

void printP() {
    printf("PPPPPPPPP\n");
    for (int i = 0; i < 3; i++) {
        printf("    P   P\n");
    }
    printf("     P P\n");

}

void printJ() {
    printf("  JJ\n");
    printf(" J\n");
    printf("J\n");
    printf(" J\n");
    printf("  JJJJJJJ\n");
}

void printD() {
    printf("DDDDDDDDD\n");
    printf("D       D\n");
    printf("D       D\n");
    printf(" D     D\n");
    printf("  DDDDD\n");

}

int main() {
    printP();
    printf("\n");
    printJ();
    printf("\n");
    printD();
    return 0;
}
