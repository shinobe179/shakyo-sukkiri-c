#include <stdio.h>

/*
# void*
アドレスを意味する大きな整数を格納する専用の型
関数宣言の引数や戻り値に使うvoidとは無関係
*/

int main(void)
{
	int a = 70;
	void* addrA = (void*)&a; // 明示的な型変換
	printf("変数a アドレス: %p\n", addrA); // プレースホルダは%p
	return 0;
}
