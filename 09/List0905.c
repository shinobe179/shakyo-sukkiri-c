#include <stdio.h>


// printMonsterSummary関数のエコでない作り方

typedef char String[1024];

typedef struct {
	String name;
	int hp;
	int attack;
} Monster;

void printMonsterSummary(Monster m)
{
	printf("monster %s (HP= %d)", m.name, m.hp);
}

int main(void)
{
// 構造体の宣言でメモリを消費。実際にはもっとパラメータがある
	Monster suzaku = {"朱雀", 100, 80};
// 変数suzakuの中身全てを変数mにコピーする。→アドレス渡し。ムダ
	printMonsterSummary(suzaku);
	return 0;
}
