#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sub(char* ages)
{
	for (int i = 0; i < 3; i++) {
		printf("%d番目: %d\n", i + 1, *(ages + i));
	}
}

int main(void)
{
	char a[] = {1, 2, 3};
	char* b = (char*)malloc(3);
	sub(a);
	memcpy(b, a, 3);
	sub(b);
	if (memcmp(a, b, 3) == 0) {
		printf("正常にコピーされました\n");
	}

	return 0;
}
