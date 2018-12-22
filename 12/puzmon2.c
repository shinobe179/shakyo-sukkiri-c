#include <stdio.h>

/*** 列挙型宣言 ***/
typedef enum Element {FIRE, WATER, WIND, EARTH, LIFE, EMPTY} Element;

/*** グローバル定数 ***/
char ELEMENT_SYMBOLS[6] = {'$', '~', '@', '#', '&', ' '};
// \x1b[3nm 以下の数値はnに対応(赤、青、緑、黄、紫、黒
char ELEMENT_COLORS[6] = {'1', '4', '2', '3', '5', '0'};

/*** 構造体 ***/
typedef struct MONSTER {
	char* name;
	Element element;
	int maxhp;
	int hp;
	int attack;
	int defense;
} Monster;

typedef struct DUNGEON {
	Monster* monsters;
	const int numMonsters;
} Dungeon;

/*** プロトタイプ宣言 ***/
int goDungeon(char* playerName, Dungeon* pDungeon);
int doBattle(char* playerName, Monster* pEnemy);

void printMonsterName(Monster* monster);

/*** 関数 ***/


// ゲーム開始から終了までの流れ
int main(int argc, char** argv)
{
	if(argc != 2) {
		printf("please specify player name.\n");
		return 1;
	}

	printf("*** Puzzle & Monsters ***\n");

	//char playerName[1024];
	//int win = 0;

	// friend
	// Monster suzaku = {"朱雀", 150, "FIRE", 25, 10};
	// Monster seiryu = {"青龍", 150, "WIND", 15, 10};
	// Monster byakko = {"白虎", 150, "EARTH", 20, 5};
	// Monster genbu  = {"玄武", 150, "WATER", 20, 15};

	// player
	//int playerHp = suzaku.hp + seiryu.hp + byakko.hp + genbu.hp;

	// prepare dangeon
	Monster dungeonMonsters[] = {
		{"スライム", WATER, 100, 100, 10, 5},
		{"ゴブリン", EARTH, 200, 200, 20, 15},
		{"オオコウモリ", WIND, 300, 300, 30, 25},
		{"ウェアウルフ", WIND, 400, 400, 40, 30},
		{"ドラゴン", FIRE, 800, 800, 50, 40}
	};
	Dungeon dungeon = {dungeonMonsters, 5};

	int winCount = goDungeon(argv[1], &dungeon);

	// closing
	if(winCount = dungeon.numMonsters) {
		printf("***GAME CLEAR!***\n");
	} else {
		printf("***GAME OVER...***\n");
	}
	printf("monster beat=%d\n", winCount);
	return 0;
}

int goDungeon(char* playerName, Dungeon* pDungeon)
{
	printf("%s arrive dangeon.\n", playerName);

	// continue to battle in dungeon
	int winCount = 0;
	for(int i = 0; i < pDungeon->numMonsters; i++) {
		winCount += doBattle(playerName, &(pDungeon->monsters[i]));
	}
	printf("%s accomplish dangeon!\n", playerName);
	return winCount;
}

int doBattle(char* monsterName, Monster* pEnemy)
{
	printMonsterName(pEnemy);
	printf(" appear.\n");

	printMonsterName(pEnemy);
	printf(" is beated.\n");
	return 1;
}

/*** Utility Functions ***/

// Display monster name with color
void printMonsterName(Monster* pMonster)
{
	char symbol = ELEMENT_SYMBOLS[pMonster->element];

	printf("\x1b[3%dm", ELEMENT_COLORS[pMonster->element]);
	printf("%c%s%c", symbol, pMonster->name, symbol);
	printf("\x1b[0m");
}
