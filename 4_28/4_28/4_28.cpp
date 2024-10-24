// 4_28.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
int input;
void managers(),  hour(),  commission(),  piece();
int main()
{
    do {
        printf("\nPlease enter your pay code (enter -1 to exit) : ");
        scanf_s("%d", &input);
        if (input != -1)
        {
            if (input == 1) {
                managers();
            }
            if (input == 2) {
                hour();
            }
            if (input == 3) {
                commission();
            }
            if (input == 4) {
                piece();
            }
        }
        else {
            break;
        }
    } while (input != -1);
}
void managers() {
    int week;
    printf("Please enter your weekly salary : ");
    scanf_s("%d", &week);
    printf("\n");
    printf("Company has to pay you : %d\n",week);
}
void hour() {                   
    int hour, wage;
    printf("Please enter your worked hours : ");
    scanf_s("%d", &hour);
    printf("\n");
    printf("Please enter your hourly wage : ");
    scanf_s("%d", &wage);
    printf("\n");
    if (hour > 40) {
        printf("Company has to pay you : %.2f\n", 40*wage+((hour-40)*1.5*wage));
    }
    else {
        printf("Company has to pay you : %d\n", hour * wage);
    }
    
}
void commission() {
    int week;
    printf("Please enter your weekly sales : ");
    scanf_s("%d", &week);
    printf("\n");
    printf("Company has to pay you : %.2f\n", 250 + week*0.057);
}
void piece() {
    int num, price;
    printf("Please enter the number of products your've sold : ");
    scanf_s("%d", &num);
    printf("\n");
    printf("Please enter the price of the product : ");
    scanf_s("%d", &price);
    printf("\n");
    printf("Company has to pay you : %d\n", price *num);
}


