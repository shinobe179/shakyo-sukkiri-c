#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
	int answer[3] = {};
	int input[3] = {};
	int continueFlag = 1;
	typedef char String[1024];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 3; i++) {
		answer[i] = rand() % 10;
		printf("%d\n", answer[i]); // test
	}

	String tmp;
	while (continueFlag == 1) {
		int hit = 0;
		int blow = 0;
		for (int i = 0; i < 3; i++) {
		printf("%d桁目の予想を0〜9の数字で入力してください:\n", i + 1);
			scanf("%s", tmp);
			int dTmp = atoi(tmp);
			input[i] = dTmp;
			if (input[i] == answer[i]) {
				hit += 1;
			} else {
				for (int j = 0; j < 3; j++) {
					if (j == i) {
						continue;
					}
					else if (input[i] == answer[j]) {
						blow += 1;
					}
				}
			}
		}
		printf("hit: %d, blow: %d\n", hit, blow);
		if (hit == 3) {
			printf("3 hits! Perfect!\n");
			return 0;
		} else {
			String tmp;
			printf("Do you continue?(1: continue, 0:finish)\n");
			scanf("%s", tmp);
			continueFlag == atoi(tmp);
		}
	}
	return 0;
}
