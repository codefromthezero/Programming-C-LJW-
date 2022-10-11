#include <stdio.h>

int main(void)
{
	int arr[3][4];
	int(*p)[4] = arr;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("arr[%d][%d] = %d ", i, j, *(*(p+i)+j));
		}
		printf("\n");
	}


	return 0;
}
