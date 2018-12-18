#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	char a[] = {49, 50, 51, 52, 53, 0};
	char b[] = "12345";

int main(void)
{
	// strlen
	int lenA = strlen(a);
	int lenB = strlen(b);
	printf("a: %d, b: %d\n", lenA, lenB);

	// strcmp
	printf("compare a and b: %s\n", strcmp(a, b) == 0?"equal":"not equal");

	// malloc
	char* c = (char*)malloc(strlen(a) + strlen(b) + 1);

	// strcpy
	c = strcpy(c, a);
	printf("%s\n", c);

	// strcat
	c = strcat(c, b);
	printf("%s\n", c);

	// free
	free(c);

return 0;
}
