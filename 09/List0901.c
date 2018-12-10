#include <stdio.h>

int main(void)
{
	int a = 70;
	long addrA = (long)&a; // 明示的な型変換
	printf("変数a 値: %d, アドレス: %ld\n", a, addrA);
	return 0;
}
