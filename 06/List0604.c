#include <stdio.h>

/*
# 構造体の代入

- 構造体の計算や比較はできないが、構造体の代入はできる。
*/

typedef char String[1024];
typedef struct {
	String name;
	int hp;
	int attack;
} Monster;

int main(void)
{
	Monster suzaku = {"朱雀", 100, 30};
	Monster suzaku2;
	suzaku2 = suzaku;
}
