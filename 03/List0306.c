#include <stdio.h>

int main(void)
{
	int i = 3.2; // int型にムリヤリ(floatやdoubleで処理すべき)小数を代入、結果小数以下の情報が落ちる
	printf("%d\n", i);
	return 0;
}
