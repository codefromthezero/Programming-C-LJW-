#include <stdio.h>

#include <stdio.h>

int main(void)
{
	double h, w;
	char choice[5];
	double bmi;
	printf("���� �Է�: ");
	scanf("%lf", &h);
	printf("������ �Է�: ");
	scanf("%lf", &w);
	printf("���� ����(c or m): ");
	scanf("%s", choice);
	printf("\n");

	if (choice[0] == 'c')
		h = h / 100;
	bmi = w / (h * h);

	if (bmi >= 40)
		printf("�� ��");
	else if (35 <= bmi)
		printf("�ߵ ��");
	else if (30 <= bmi)
		printf("��");
	else if (25 <= bmi)
		printf("��ü��");
	else if (18.5 <= bmi)
		printf("����");
	else
		printf("��ü��");

	return 0;

}
