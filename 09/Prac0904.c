#include <stdio.h>

void funcB(void)
{
	int b = 20;
	printf("b-address: %ld\n", (long)&b);
}

void funcA(void)
{
	int a = 10;
	printf("a-address: %ld\n", (long)&a);
	funcB();
}

int main(void)
{
	funcA();
	return 0;
}
