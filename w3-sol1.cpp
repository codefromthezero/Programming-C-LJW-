#include <stdio.h>

int main(void)
{
	int arr[7][5]={0};
	int i,j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("�л� %d�� %d��° ���� �Է�(1��° ����, 2��° ����, 3��° ����): ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<5; i++)
		for(j=0; j<3; j++)
			arr[i][3]+=arr[i][j];
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
			arr[i][4]+=arr[i][j];
		arr[i][4]/=3;
	}
		
	for(j=0; j<3; j++)
		for(i=0; i<5; i++)
			arr[5][j]+=arr[i][j];
	for(j=0; j<3; j++)
	{
		for(i=0; i<5; i++)
			arr[6][j]+=arr[i][j];
		arr[6][j]/=5;
	}
	
	for(i=0; i<7; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
