#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int answer[3] = {};
	int input[3] = {};
	typedef char String[1024];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 3; i++) {
		answer[i] = rand() % 10;
		printf("%d\n", answer[i]); // test
	}


	String tmp;
	for (int i = 0; i < 3; i++) {
	printf("%d桁目の予想を0〜9の数字で入力してください:\n", i + 1);
		scanf("%s", tmp);
		int dTmp = atoi(tmp);
		input[i] = dTmp;
	}
	return 0;
}
