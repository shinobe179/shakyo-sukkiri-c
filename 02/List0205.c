#include <stdio.h>

int main(void)
{
	int tax = 108;
	int fax = 50000;
	printf("50,000円から40,000円に値下げします\n");
	tax = 40000;
	printf("FAXの新価格(税込): %d円\n", fax * tax / 100);
	return 0;
}
