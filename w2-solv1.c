#include <stdio.h>

#include <stdio.h>

int main(void)
{
	double h, w;
	char choice[5];
	double bmi;
	printf("신장 입력: ");
	scanf("%lf", &h);
	printf("몸무게 입력: ");
	scanf("%lf", &w);
	printf("신장 단위(c or m): ");
	scanf("%s", choice);
	printf("\n");

	if (choice[0] == 'c')
		h = h / 100;
	bmi = w / (h * h);

	if (bmi >= 40)
		printf("고도 비만");
	else if (35 <= bmi)
		printf("중등도 비만");
	else if (30 <= bmi)
		printf("비만");
	else if (25 <= bmi)
		printf("과체중");
	else if (18.5 <= bmi)
		printf("정상");
	else
		printf("저체중");

	return 0;

}
