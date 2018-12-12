#include <stdio.h>

void funcA(int x)
{
	x = 100; // 変数の書き換え
}

/*
関数の引数や戻り値に配列型を指定すると、ポインタ型を指定したものとみなされる
つまり、funcB関数の引数は「int* x」として扱われる
*/

void funcB(int x[3])
{
	x[0] = 100;
}

int main(void)
{
	int a = 5;
	int b[3];
	b[0] = 5;

	funcA(a);
	funcB(b);

// aは書き換わらないが、bは(funcBの引数がbのポインタ渡しということになっているので)関数による代入の影響を受けて100になる
	printf("a=%d, b[0]=%d\n", a, b[0]);
	return 0;
}
