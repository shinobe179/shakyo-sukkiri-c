#include <stdio.h>

int add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int main(void)
{
	int ans = add(2018, 5);
	printf("%d\n", ans);
}

