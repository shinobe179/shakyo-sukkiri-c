#include <stdio.h>

/*** 列挙型宣言 ***/
enum{FIRE, WATER, WIND, EARTH, LIFE, EMPTY};

/*** グローバル定数 ***/
char ELEMENT_SYMBOLS[6] = {'$', '~', '@', '#', '&', ' '};
// \x1b[3nm 以下の数値はnに対応(赤、青、緑、黄、紫、黒
char ELEMENT_COLORS[6] = {'1', '4', '2', '3', '5', '0'};

/*** 構造体 ***/
typedef struct {
	char name[1024];
	int hp;
	char attr[1024];
	int attack;
	int defense;
} Monster;

/*** 関数 ***/
void goDungeon(char* playerName)
{
	printf("%sはダンジョンに到着した\n", playerName);
}

void doBattle(char* monsterName)
{
	printf("%sが現れた\n", monsterName);
	win++;
	printf("%sを倒した\n", monsterName);
}


int main(int argc, char** argv)
{
	char playerName[1024];
	int win = 0;

// friend
	Monster suzaku = {"朱雀", 150, "FIRE", 25, 10};
	Monster seiryu = {"青龍", 150, "WIND", 15, 10};
	Monster byakko = {"白虎", 150, "EARTH", 20, 5};
	Monster genbu  = {"玄武", 150, "WATER", 20, 15};

// player
	int playerHp = suzaku.hp + seiryu.hp + byakko.hp + genbu.hp;

// enemy
	Monster slime   = {"スライム", 100, "WATER", 10, 5};
	Monster goblin  = {"ゴブリン", 200, "EARTH", 20, 15};
	Monster bigbat  = {"オオコウモリ", 300, "WIND", 30, 25};
	Monster werwolf = {"ウェアウルフ", 400, "WIND", 40, 30};
	Monster dragon  = {"ドラゴン", 800, "FIRE", 50, 40};

	printf("*** Puzzle & Monsters ***\n");
	printf("What's your name?\n");
	scanf("%s", playerName);
	while (win < 5) {
		goDungeon(playerName);
		doBattle(slime.name);
	}
	return 0;
}

/*** ユーティリティ関数 ***/
void printMonsterName(Monster monster)
{
	printf("\x1b[3%sm%s\x1b[0m", monster.attr, monster.name);
}
