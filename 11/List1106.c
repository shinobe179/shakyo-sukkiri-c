#include <stdio.h>

/*
int scanf(const char* format, ...);
書式を指定してキーボード入力を受け付ける
*/

typedef char String[1024];

int main(void)
{
	char name[1024];
	int hp;
	printf("名前とHPをスペース区切りで入力してください\n"); // テキストだとカンマだがうまくできなかった
	scanf("%s %d", name, &hp); // scanfはプレースホルダを埋める変数のアドレスを渡す。配列以外は&をつける必要がある
	printf("%d\n", hp);
	printf("入力された名前: %s\n入力されたHP: %d\n", name, hp);

	return 0;
}
