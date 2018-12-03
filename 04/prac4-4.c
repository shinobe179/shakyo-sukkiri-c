#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("いただきます\n");
	bool more = true;
	if (more) {
		printf("おかわり\n");
	} else {
		printf("おなかいっぱい\n");
	}
	return 0;
}
