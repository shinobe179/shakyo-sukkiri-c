#include <stdio.h>

typedef char String[1024];

typedef struct{
	String name;
	int hp;
	int attack;
} Monster;

// 引数をMonster*型にすることで、先頭アドレスさえ渡せば勝手に任意のサイズぶん読み込んでくれる→ポインタ渡し
void printMonsterSummary(Monster* m)
{
	// ポインタ渡しは「(*変数名).メンバ名」、もしくは「変数名->メンバ名」で表現できる
	printf("monster %s(HP= %d)", m->name, m->hp);
}

int main(void)
{
	Monster suzaku = {"朱雀", 100, 80};
	printMonsterSummary(&suzaku);
}
