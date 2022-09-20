#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

double GetCirArea(double);
double GetCirCircum(double);

int main(void)
{
	double r, area, circum;
	printf("반지름: ");
	scanf("%lf", &r);

	area = GetCirArea(r);
	circum = GetCirCircum(r);

	printf("원의 면적: %lf \n원의 둘레: %lf", area, circum);

	return 0;
}

double GetCirArea(double rad)
{
	double circle_area;
	circle_area = PI * rad * rad;
	return circle_area;
}

double GetCirCircum(double rad)
{
	double circle_circum;
	circle_circum = 2 * PI * rad;
	return circle_circum;
}
