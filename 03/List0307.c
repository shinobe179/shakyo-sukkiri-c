#include <stdio.h>

/*
キャスト: 明示的な型変換
(変換先の型名)式
*/
int main(void)
{
	int age = (int)3.2; // それでも小数点以下は落ちる
	printf("%d\n", age);
	return 0;
}
