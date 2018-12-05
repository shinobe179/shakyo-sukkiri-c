#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL)); // 乱数生成の準備
	enum { FIRE, WATER, WIND, EARTH }; // 定数配列
	int gems[10];

	// 宝石をランダムに生成
	for (int i = 0; i < 10; i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
		printf("%d\n", gemType);
	}
	return 0;
}
