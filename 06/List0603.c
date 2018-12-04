#include <stdio.h>

typedef char String[1024];

int main(void)
{
	/* 
	# 構造体の型宣言
	- 構造体をtypedefしてしまうと、Monster型として使えるので便利
	typedef struct {
		型名 メンバ名1;
		型名 メンバ名2;
		型名 メンバ名3;
	} タグ名;
	*/
	typedef struct {
		String name;
		int hp;
		int attack;
	} Monster;

// 構造体変数の初期化
	Monster seiryu = {"青龍", 100, 200};
	Monster suzaku = {"朱雀", 100, 100};
	Monster byakko = {"白虎", 200, 120};
	Monster genbu = {"玄武", 300, 80};

	const String TEMPLATE = "%s : HP=%03d 攻撃力=%03d\n"; // %03dは0埋めの3ケタ固定長

	printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
	printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
	printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
	printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

	return 0;
}
