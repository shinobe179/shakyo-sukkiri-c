#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	int temp = 30;
	int mc = 1;
	while (mc == 1) {
		printf("現在の設定温度: %d\n", temp);
		printf("暑ければ1、そうでなければ0\n");
		String smc;
		scanf("%s", smc);
		mc = atoi(smc);
		if (mc == 1) {
			temp--;
		}
		else if (mc == 0) {
			printf("設定を終了します\n");
		}
	}
	return 0;
}
