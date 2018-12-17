#include <stdio.h>

/*
int argc: 実行時に指定した引数 + 1
char** argv: 実行時に指定した引数の先頭アドレスが並んでいるメモリ領域の先頭アドレス
*/

int main(int argc, char** argv)
{
	printf("argc=%d\n", argc);
	for (int i = 0; i < argc; i++) {
		char* strAddr = argv[i];
		printf("%d番目の情報: %s\n", i, strAddr);
	}

	return 0;
}
