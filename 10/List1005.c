#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void* malloc(size_t len)
len: 確保したいバイト数
戻り値: 確保されたメモリ領域の先頭アドレス(必要に応じてint*などにキャスト)

void free(void* p)
p: 過去にmallocで確保したメモリ領域の先頭アドレス
*/

int* readyAges(void)
{
	
	int* ages = (int*) malloc(16); // ヒープに16バイト確保
	return ages;
}

int main(void)
{
	int* a = readyAges();
	if (a == NULL) { // NULL: アドレスの確保に失敗した場合の戻り値
		printf("ヒープの確保に失敗しました\n");
	} else {
		a[0] = 19;
		free(a); // 使用済みヒープ領域の開放
	}

	return 0;
}
