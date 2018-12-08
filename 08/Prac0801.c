#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void weather(void)
{
	printf("It's cloudy.\n");
}

double calcCircleArea(double radius)
{
	double diameter = radius * radius * 3.14;
	return diameter;
}

bool isLeapYear(int ad)
{
	bool isLY;
	if (ad % 4 == 0) {
		if (ad % 100 == 0) {
			if (ad % 400 == 0) {
				isLY = true;
			} else {
				isLY = false;
			}
		} else {
			isLY = true;
		}
	} else {
		isLY = false;
	}
	return isLY;
}

int main(void)
{
	weather();
	printf("%f\n", calcCircleArea(3));
	time_t t = time(NULL);
	printf("%ld\n", t);
	printf("%d\n", isLeapYear(2020));
}
