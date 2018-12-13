#include <stdio.h>
#include <string.h>

/*
memcpy -- メモリ領域のコピー
配列をコピーしたい時に使える
memcpy(void* addr1, const void* addr2, size_t len);
void* addr1: コピー先先頭アドレス
const void* addr2: コピー元先頭アドレス
size_t len: コピーするバイト数
*/

void funcF(void)
{
	int f = 40;
	printf("f-address: %p\n", &f);
}

void funcE(void)
{
	int e = 30;
	printf("e-address: %p\n", &e);
	funcF();
}

int main(void)
{
	int a[4] = {19, 20, 29, 29};
	int b[4];

// ソースコード上の配列変数名は、その先頭のアドレスとして扱われる(復習)
	memcpy(b, a, 16);

// 配列は若番の番地から使われる？
	printf("a[0]: %d, 番地: %p\n", a[0], &a[0]);
	printf("a[1]: %d, 番地: %p\n", a[1], &a[1]);
	printf("a[2]: %d, 番地: %p\n", a[2], &a[2]);
	printf("a[3]: %d, 番地: %p\n", a[3], &a[3]);
	printf("b[0]: %d, 番地: %p\n", b[0], &b[0]);
	printf("b[1]: %d, 番地: %p\n", b[1], &b[1]);
	printf("b[2]: %d, 番地: %p\n", b[2], &b[2]);
	printf("b[3]: %d, 番地: %p\n", b[3], &b[3]);

// 変数は老番の番地から使われる？-> 誤
	int c = 10;
	int d = 20;
	printf("c:%d, 番地: %p\n", c, &c); 
	printf("d:%d, 番地: %p\n", d, &d); 

// main以外の関数によって生成された変数は老番の番地を使う？->正
	funcE();
	return 0;
}
