#include <stdio.h>

int RecursionSummation(int);

int main(void)
{
	int n;
	printf("양의 정수 입력: ");
	scanf("%d", &n);

	printf("홀수/짝수의 합: %d", RecursionSummation(n));

	return 0;
}

int RecursionSummation(int num)
{
	while (num>0)
	{
		if (num % 2 == 0)
			return num += RecursionSummation(num - 2);
		else
			return num += RecursionSummation(num - 2);
	}

}
