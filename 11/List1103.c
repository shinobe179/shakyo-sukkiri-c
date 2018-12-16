#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	// 配列宣言でメモリを確保
	char array[1024] = "C";
	printf("%s, %p\n", array, &array);

	// mallocでメモリを確保
	char* msg2 = (char*)malloc(1024);
	msg2[0] = 'C';
	msg2[1] = '\0';
	printf("%s, %p\n", msg2, &msg2);
	free(msg2);

	// リテラルでメモリを確保
	// ソースコード中に含まれる全てのリテラルは自動的に静的領域に格納される
	// msg3には、静的領域に読み込まれた"C"のアドレスが格納される
	// const(定数)なのは、静的領域データがROなメモリセグメントに配置されるため
	const char* msg3 = "C";
	printf("%s, %p\n", msg3, &msg3);

	return 0;
}
