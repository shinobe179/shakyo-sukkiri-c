#include <stdio.h>

/*
# 引数のある関数の定義
void 関数名(引数リスト)
{
	処理
}
*/

typedef char String[1024];

void hello(String name) // 引数も型をつけること
{
	printf("%sさん、こんにちは\n", name);
}

int main(void)
{
	hello("悟空");
	hello("悟飯");
	return 0;
}
