#include <stdio.h>
#include <stdlib.h>

/*
scanf()で入力の受け付け
*/

typedef char String[1024];

int main(void)
{
	String name;
	printf("あなたの名前を入力してください\n");
	scanf("%s", name);
	
	String ageStr;
	printf("あなたの年齢を入力してください\n");
	scanf("%s", ageStr);
	
	int age = atoi(ageStr);
	printf("ようこそ、%d歳の%sさん\n", age, name);
	return 0;
}
