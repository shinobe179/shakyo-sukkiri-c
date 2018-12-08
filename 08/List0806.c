#include <stdio.h>

void add(int x, int y)
{
	int ans = x + y;
	printf("%d + %d = %d\n", x, y, ans);
}

int main(void)
{
	int year = 2018;
	add(year, 4);
	add(year, 50);

	return 0;
}
