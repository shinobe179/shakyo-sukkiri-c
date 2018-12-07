#include <stdio.h>

void funcB(void)
{
	printf("関数Bです\n");
}

void funcA(void)
{
	printf("関数Aです\n");
	funcB();
}

int main(void)
{
	funcA();
	return 0;
}
