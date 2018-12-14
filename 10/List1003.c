#include <stdio.h>
#include <string.h>

/*
メモリの比較
int memcmp(const void* addr1, const void* addr2, size_t len);
*/

int main(void)
{
	int a[4] = {19, 20, 29, 29};
	int b[4] = {19, 20, 29, 29};
	int c[4] = {19, 20, 29, 28};
	int ab = memcmp(a, b, 16);
	int ac = memcmp(a, c, 16);

	if (ab == 0) {
		printf("a = b\n");
	} else {
		printf("a ! b\n");
	}

	if (ac == 0) {
		printf("a = c\n");
	} else {
		printf("a ! c\n");
	}
}
