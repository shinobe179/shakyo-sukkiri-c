#include <stdio.h>

/*
# 関数の定義
void 関数名(void)
{
	関数が呼び出された時に実行する処理
}
*/

void hello(void)
{
	printf("こんにちは\n");
}

/*
# 関数の実行
関数名()
*/

int main(void)
{
	hello();
	return 0;
}
