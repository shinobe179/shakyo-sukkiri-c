#include <stdio.h>

/*
# プロトタイプ宣言
最初に関数Bの存在を表明しておくことで、
関数Bよりも先に定義された関数Aで関数Bを
呼び出せる
*/

// 返り値の型 関数名(引数の型)っぽい。それぞれ無ならvoidが入る？
void funcA(void); // funcAの存在を表明
void funcB(void); // funcBの存在を表明

int main(void)
{
	funcA();
	return 0;
}

void funcA(void)
{
	printf("関数Aです\n");
	funcB();
}

void funcB(void)
{
	printf("関数Bです\n");
}
