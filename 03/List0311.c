#include <stdio.h>
#include <stdlib.h>

/*
atoi; 文字列を整数に変換する
*/

typedef char String[1024];

int main(void)
{
	String age = "29";
	int n = atoi(age);
	printf("あなたは来年%d歳になります\n", n++);

	String testStr = "102AAA1"; // 先頭が数字から始まれば、最初の連続する整数は整数に変換される
	int nn = atoi(testStr);
	printf("%d\n", nn);
	return 0;
}
