#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int code;
	char character;
} Ascii;

Ascii characters[26] = {};

int main(void)
{
	for (int i = 0; i < 26; i++) {
		characters[i].code = i + 65;
		characters[i].character = i + 65;
		printf("%d %c\n", characters[i].code, characters[i].character);
	}
	return 0;
}
