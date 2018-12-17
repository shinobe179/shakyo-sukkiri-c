#include <stdio.h>

/*
int sprintf(char* dest, const char* format, ...);
書式を指定して文字列に書き込む
結果を画面に出力するのではなく、指定したメモリ領域に書き込む
*/

typedef char String[1024];

int main(void)
{
	char str[1024];
	sprintf(str, "%8s HP=%04d / %04d", "misaki", 50, 1200);
	printf("%s\n", str);

	return 0;
}
