#include <stdio.h>
#include <string.h>

void sub(char* ages)
{
	for (int i = 0; i < 3; i++) {
		printf("%d番目: %d\n", i + 1, *(ages + i));
	}
}

int main(void)
{
	char a[] = {1, 2, 3};
	char b[3];
	sub(&a[0]);
	memcpy(&b[0], &a[0], 3);
	sub(&b[0]);
	if (memcmp(&a[0], &b[0], 3) == 0) {
		printf("正常にコピーされました\n");
	}

	return 0;
}
