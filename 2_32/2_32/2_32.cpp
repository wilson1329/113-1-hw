// 2_32.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

float w, h,bmi;
int main()
{
    printf("Please enter your height(m)\n");
    scanf_s("%f",&h);
    printf("Please enter your weight(kg)\n");
    scanf_s("%f", &w);
    bmi = w / (h * h);
    printf("Your BMI is %.f\n", bmi);
    if (bmi < 18.5) {
        printf("You are underweight\n");
    }
    if (bmi > 18.5 && bmi<24.9) {
        printf("You are normal\n");
    }
    if (bmi < 29.9 && bmi> 25) {
        printf("You are overweight\n");
    }
    if (bmi > 30 ) {
        printf("You are obese\n");
    }
    printf("=====================================================================\n");
    printf("BMI values\nUnderweight:\tless than 18.5\nNormal:\t\tbetween 18.5 and 24.9\nOvweweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater\n");
}


