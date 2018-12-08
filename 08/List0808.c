#include <stdio.h>

/*
# 戻り値
return: 関数の実行をしゅうりょうして戻り値を返す
戻り値の型がvoid(=戻り値がない)の場合はreturnを書かなくてもよい
戻り値は1つしか返せない
*/

int add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int main(void)
{
	int year = 2018;
	add(year, 4);
	add(year, 50);

	return 0;
}
