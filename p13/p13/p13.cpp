#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main(void)
{
    int K;
    double Ans;
    printf("計算3.5的K次方?K=?");
    scanf_s("%d", &K);
    Ans = Power(3.5, K);
    printf("3.5的%d次方=%f\n", K, Ans);
    system("pause");
}
double Power(double X, int n) {
    int i;
    double PowerXn=1;
    for ( i = 0; i <= n ; i++)
    {

        PowerXn *= X;
        
    }
    return PowerXn;
}

