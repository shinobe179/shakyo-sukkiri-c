#include <stdio.h>

/*
# 配列に別名を与える

- int gems[10];
  - ×int型配列変数gems[10]の宣言
	- ○int[10]型配列変数gemsの宣言
  - これがなんか気持ち悪いという人のために
*/

int main(void)
{
	typedef int IntX10[10]; //int[10]型にIntX10という別名を与える
	IntX10 gems; // int gems[10];と同じ

	gems[1] = 3;
	printf("%d\n", gems[1]);
	return 0;
}
