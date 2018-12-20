#include <stdio.h>

/*** 列挙型宣言 ***/

/*** グローバル定数 ***/
int win = 0;

/*** 構造体 ***/
typedef struct {
	char name[1024];
	int hp;
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
	Monster suzaku = {"suzaku", 100};

	printf("*** Puzzle & Monsters ***\n");
	printf("What's your name?\n");
	scanf("%s", playerName);
	while (win < 5) {
		goDungeon(playerName);
		doBattle(suzaku.name);
	}
	return 0;
}

/*** ユーティリティ関数 ***/
