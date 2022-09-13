#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n;
	int i, j;
	printf("정수 입력: ");
	scanf("%d", &n); 
	for(i=0; i<n; i++)
	{
		for(j=i; j<n-1; j++)
		{
			printf(" ");
		}
		for(j=0; j<=i; j++)
		{
			printf("%d", 0+i-j);
		}
		for(j=1; j<=i; j++)
		{
			printf("%d", 0+j);
		}
		for(j=i; j<n-1; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
