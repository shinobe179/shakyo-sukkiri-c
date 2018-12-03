#include <stdio.h>

/*
命令文
呼び出す命令の名前(引数);
*/

int main(void)
{
	int age = 29;
	printf("今年%d歳で、", age);
	int newAge = age + 1;
	printf("来年は%d歳\n", newAge);
	return 0;
}
