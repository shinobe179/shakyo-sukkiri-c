#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
strlen(const char* str);
文字列の長さを取得

strcmp(const char* str1, const char* str2);
文字列の比較

strcpy(char* dest, const char* src);
文字列のコピー

strcat(char* dest, const char* src);
文字列の連結
*/

typedef char String[1024];

int main(void)
{
	char str1[1024] = "c language";
	char str2[1024] = "d language";

	// strlen
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	printf("str1: %d, str2: %d\n", len1, len2);

	// strcmp
	if (strcmp(str1, str2) == 0) { // 文字列は\0で終わるので、メモリの終点アドレスの指定は不要
		printf("str1とstr2は同じ文字列\n");
	} else {
		printf("str1とstr2は違う文字列\n");
	}

	// strcpy
	char* str3 = (char*)malloc(1024); // mallocでヒープ確保
	strcpy(str3, str2);
	printf("str3: %s\n", str3);

	// strcat
	strcat(str3, str2);
	printf("str3: %s\n", str3);



	return 0;
}
