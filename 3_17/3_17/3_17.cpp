

#include <stdio.h>
int input;
float balance, charges, credits, limit;
int main()
{
	do {
		printf("please enter your account number (enter -1 to exit) : ");
		scanf_s("%d", &input);
		if (input != -1)
		{
			printf("\nplease enter your beginning balance : ");
			scanf_s("%f", &balance);
			printf("\nplease enter your total charges : ");
			scanf_s("%f", &charges);
			printf("\nplease enter your total credits : ");
			scanf_s("%f", &credits);
			printf("\nplease enter your credit limits : ");
			scanf_s("%f", &limit);
			printf("\n");

			if ((balance + credits)>limit)
			{
				printf("\nAccount number : %d",input);
				printf("\nCredit limits : %.2f",limit);
				printf("\nBalance : %.2f\n",balance + credits);
				printf("Credit limit exceeded !\n\n");
			}
		}
		else {
			break;
		}
	} while (input != -1);


	
}

