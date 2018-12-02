#include <stdio.h>

/*
Cには文字列型がない
以下の方法でムリヤリ作ったString型は、初期化を除いて代入をしてはならない
*/

typedef char String[1024]; // データ型に名前を付ける

int main(void)
{
	String monsterName = "ドラゴン";
	printf("敵は%s\n", monsterName);
	return 0;
}
