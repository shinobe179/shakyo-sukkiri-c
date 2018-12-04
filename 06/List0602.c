#include <stdio.h>

typedef char String[1024];

/*
# 構造体の宣言
struct タグ名 {
	型 メンバ名1;
	型 メンバ名2;
	型 メンバ名3;
	...
}

# 構造体変数の宣言
struct タグ名 変数名;

# 構造体変数のメンバへのアクセス
構造体変数名.メンバ名;
*/

int main(void)
{
	struct MONSTER {
		String name;
		int hp;
		int attack;
	};

	struct MONSTER seiryu;
	struct MONSTER suzaku;
	struct MONSTER byakko;
	struct MONSTER genbu;
	return 0;

suzaku.hp = 100;
suzaku.attack = 30;
// suzaku.name = "朱雀"; Stringは初期化を除き=で代入してはならない
}
