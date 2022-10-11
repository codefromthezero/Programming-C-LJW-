#include <stdio.h>
#include <math.h>

int main(void)
{
	int a[3][5];
	int* p[3]={a[0], a[1], a[2]};
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<5; j++) {
			a[i][j]= (j+1)*pow(10,i);
		}
	}
	for (int i=0; i<3; i++) {
		for (int j=0; j<5; j++) {
			printf("a[%d][%d]= %3d ", i, j, *(*(p+i)+j));
		}
		printf("\n");
	} 
	
	return 0;
}
