#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); // 時刻を元にシードを生成している？0ULはUnsigned Longの0?
	int r = rand() % 100; // 100で割ったあまりにすれば、最大値は100になる
	printf("あなたは多分%d歳ですね\n", r);
	return 0;
}

// 1秒に1回値が変わる感じ
