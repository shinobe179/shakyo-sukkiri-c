#include <stdio.h>

int printInByAddress(void* a)
{
	int* i = a;
	printf("%d\n", *i);
}

int main(void)
{
	int a = 179;
	void* addrA = (void*)&a;
	printf("aのアドレス: %p\n", addrA);
	printInByAddress(addrA);
	return 0;
}
