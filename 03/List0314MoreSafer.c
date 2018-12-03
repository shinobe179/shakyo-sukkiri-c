#include <stdio.h>
#include <stdlib.h>

/*
scanf()で入力の受け付け
より安全な書き方らしい
*/

typedef char String[1024];

int main(void)
{
	String name;
	printf("あなたの名前を入力してください\n");
	scanf("%1023s%*[^\n]%*c", name);
	
	String ageStr;
	printf("あなたの年齢を入力してください\n");
	scanf("%1023s%*[^\n]%*c", ageStr);
	
	int age = atoi(ageStr);
	printf("ようこそ、%d歳の%sさん\n", age, name);
	return 0;
}
