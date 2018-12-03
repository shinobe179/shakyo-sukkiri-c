#include <stdio.h>

int main(void)
{
	double d = 8.5 / 2; // 2(int)を2.0(double)に変換
	long l = 5 + 2L; //5(int)を5L(long)に変換
	printf("%f\n%ld\n", d, l); // doubleやfloat=浮動小数の場合はf、longの場合は%ld
	return 0;
	}
