#include <stdio.h>

int main(void)
{
	char c = 100;
	char d = c + 100;// ここで溢れるはず
	printf("%d\n", d);
	return 0;
}
