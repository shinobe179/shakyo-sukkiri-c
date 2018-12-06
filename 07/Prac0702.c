#include <stdio.h>

int main(void)
{
	int scores[5] = {88, 61, 90, 75, 93};
	int max = 0;
	int min = 100;
	int sum;
	double avg;
	for (int i = 0; i < 5; i++) {
		sum += scores[i];
		if (max < scores[i]) {
			max = scores[i];
		}
		if (min > scores[i]) {
			min = scores[i];
		}
	}
	avg = sum / 5;
	printf("max: %d min: %d avg: %.2f\n", max, min, avg);
	return 0;
}

