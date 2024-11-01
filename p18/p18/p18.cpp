// p18.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[60] = "Welcome";
    char string2[60]  ;
    int len;
    strcpy_s(string2, string1); //(target,source)
    printf("srting2 is %s\n", string2);
    len = strlen(string2);
    printf("string lenth is %d\n", len);
    system("pause");

}


