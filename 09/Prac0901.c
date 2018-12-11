#include <stdio.h>

int main(void)
{
	char moji = 'a';
	int money = 300000;
	char* mojiAddr = &moji;
	int* moneyAddr = &money;

	printf("char型の消費メモリ量: %ld\n", sizeof(moji));
	printf("int型の消費メモリ量: %ld\n", sizeof(money));
	printf("char*型の消費メモリ量: %ld\n", sizeof(mojiAddr));
	printf("int*型の消費メモリ量: %ld\n", sizeof(moneyAddr));

	return 0;
}
