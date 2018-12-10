#include <stdio.h>

/*
void*型変数に格納した&aでは格納された場所の先頭アドレスしか分からない
int*型の変数に&aを格納すると、int型のバイト数(4バイト)ぶんの実データを取得する
*/

int main(void)
{
	int a = 70;

	int* addrA = &a;
	printf("aの値: %d, %p番地に格納されている情報: %d\n", a, &a, *addrA);
	return 0;
} 
