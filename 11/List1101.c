#include <stdio.h>

typedef char String[1024];

int main(void)
{
	char ages[1024] = {19, 21, 29, 29};
	String str = "hello";
// なぜ1024文字分あるメモリ空間のうち、先頭の5文字分しか表示されないのか？
	printf("%s\n", str);
	return 0;
}
