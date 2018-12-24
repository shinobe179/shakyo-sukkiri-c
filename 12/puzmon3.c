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

	// 敵モンスター格納用Monster[]型変数
	Monster dungeonMonsters[] = {
		{"スライム", WATER, 100, 100, 10, 5},
		{"ゴブリン", EARTH, 200, 200, 20, 15},
		{"オオコウモリ", WIND, 300, 300, 30, 25},
		{"ウェアウルフ", WIND, 400, 400, 40, 30},
		{"ドラゴン", FIRE, 800, 800, 50, 40}
	};

	// 味方モンスター格納用Monster[]変数
	Monster myMonsters[] = {
		{"朱雀", FIRE, 150, 150, 25, 10},
		{"青龍", WATER, 150, 150, 15, 10},
		{"白虎", WIND,  150, 150, 20, 5},
		{"玄武", EARTH,  150, 150, 20, 15}
	};

	// Dungeon型変数
	// TODO: 配列の長さを調べる関数があれば5を置き換えられるのでは？
	Dungeon dungeon = {dungeonMonsters, 5};

	int winCount = goDungeon(argv[1], &dungeon);

	// ゲームクリア判定
	if(winCount = dungeon.numMonsters) {
		printf("***GAME CLEAR!***\n");
	} else {
		printf("***GAME OVER...***\n");
	}
	printf("monster beat=%d\n", winCount);
	return 0;
}

// プレイヤー名とDungeon型変数のポインタを引数にとって、モンスターの数だけバトルする
// 戻り値はバトルに勝った回数
int goDungeon(char* playerName, Dungeon* pDungeon)
{
	printf("%s arrive dangeon.\n", playerName);

	// TODO:味方モンスターのHP合計を表示

  // main関数とは別スコープの勝利数管理用変数を宣言
	int winCount = 0;
	for(int i = 0; i < pDungeon->numMonsters; i++) {
		// doBattle関数に対して、プレイヤー名とDungeon型変数のモンスター名をポインタ渡し
		winCount += doBattle(playerName, &(pDungeon->monsters[i]));
	}
	printf("%s accomplish dangeon!\n", playerName);
	return winCount;
}

// 
int doBattle(char* playerName, Monster* pEnemy)
{
	printMonsterName(pEnemy);
	printf(" appear.\n");

	// TODO: バトル処理

	// 勝利時処理
	printMonsterName(pEnemy);
	printf(" is beated.\n");
	return 1;
}

/*** ユーティリティ変数 ***/

// モンスター名を色付きで表示
void printMonsterName(Monster* pMonster)
{
	// モンスターの属性をポインタ渡し
	char symbol = ELEMENT_SYMBOLS[pMonster->element];

	printf("\x1b[3%dm", ELEMENT_COLORS[pMonster->element]);
	printf("%c%s%c", symbol, pMonster->name, symbol);
	printf("\x1b[0m");
}
