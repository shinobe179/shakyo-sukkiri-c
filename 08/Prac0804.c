#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int iscanf(void)
{
	String inputStr;
	scanf("%s", inputStr);
	int outputInt = atoi(inputStr);
	return outputInt;
}

int calcPayment(int amount, int people)
{
	double dnum = amount / people;
	int pay = (dnum / 100) * 100;
	if (dnum > pay) {
		pay = pay + 100;
	}
	return pay;
}

void showPayment(int pay, int payorg, int people)
{
	printf("*** payment ***\npay: \\%d yen\norg: \\%d yen\n", pay, payorg);
}

int main(void)
{
	printf("Please input total payment.\n");
	int amount = iscanf();
	printf("Please input number of people.\n");
	int people = iscanf();

	int pay = calcPayment(amount, people);
	int payorg = amount - pay * (people - 1);

	showPayment(pay, payorg, people);

	return 0;
}
