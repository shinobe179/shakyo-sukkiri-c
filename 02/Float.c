#include <stdio.h>

int main(void)
{
	double height;
	height = 171.2;

	float weight;
	weight = 67.5F;

	printf("height: %f\nweight: %f\n", height, weight);
}

/*
# 浮動小数点型

- 通常はdouble型を利用する。
  - doubleのほうがfloatよりも多くのメモリを消費するが、より精度の高い計算ができる。
- 浮動小数点は誠に厳密な計算ができない。金額の計算にfloatやdoubleを使ってはいけない。
*/
