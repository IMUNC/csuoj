#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	while (~scanf("%d",&n))
	{
		int temp;
		int** arr = (int**)malloc(sizeof(int*)*n);
		for (int i = 0; i < n; i++)
		{
			arr[i] = (int*)malloc(sizeof(int) * n);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0;j < n;j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0;j < n;j++) {
				printf("%d ", arr[j][i]);
			}
			printf("\n");
		}

	}

	return 0;
}