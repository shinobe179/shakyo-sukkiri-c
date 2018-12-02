#include <stdio.h>

/*
# 列挙体(enumulation)

連続したint型の定数を複数宣言できる

enum{定数名1 = 整数, 定数名2 = 整数, ...};
*/

int main(void)
{
// 何も指定しなければ0から1ずつ採番される
	enum{a, b, c};
	printf("%d, %d, %d\n", a, b, c);

// 最初の値だけ指定するとそこから1ずつ採番される
	enum{d = 1, e, f};
	printf("%d, %d, %d\n", d, e, f);

// 個々に連続性のない値を指定できる
	enum{g = 40, h = 8, i = 19};
	printf("%d, %d, %d\n", g, h, i);

return 0;
}
