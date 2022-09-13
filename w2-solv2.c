#include <stdio.h>

int ReverseNum(int n)
{
	int result=0, r, i, square;
	while (n>0)
	{
		r=n%10;
		n=n/10;
		result=result*10+r;
	}
	return result;
}

int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	printf("%d", ReverseNum(num));

	return 0;
}
