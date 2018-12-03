#include <stdio.h>

/*
# 型変換

- 右側にある型に代入すると自動で型変換される

char - short - int - long - float - double

※テキストでは左にあるほど小さい、右にあるほど大きいと表現しているが、概念的なものでメモリの消費量などとは関係がない？
*/

int main(void)
{
	float f = 3; // floatにintを代入
	double d = f; // doubleにfloatを代入
	printf("%f\n", f);
	printf("%f\n", d);
	return 0;
}
