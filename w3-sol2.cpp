#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

double GetCirArea(double);
double GetCirCircum(double);

int main(void)
{
	double r, area, circum;
	printf("������: ");
	scanf("%lf", &r);

	area = GetCirArea(r);
	circum = GetCirCircum(r);

	printf("���� ����: %lf \n���� �ѷ�: %lf", area, circum);

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
