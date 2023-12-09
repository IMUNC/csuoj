#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int sbszs(int x) {
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0) { return 0; }
	}return 1;
}
int zs(int x) {
	
	x++;
	while (sbszs(x) == 0)
	{
		x++;
	}
		return x;
}
int right(int x, int num,int sum, int* count) {
	for (int i = x+1; i < sum; i++)
	{
		if (num == 2)
		{
			if (i == sum - 1) {
			printf("2");
			break;
			}
			else
			{
				printf("2 ");
			i++;

			}
		}
		num = zs(num);
		if (i == sum -1)
		{
			printf("%d", num);

		}
		else {

		printf("%d ", num);
		}
	}
	printf("\n");
	return num;
}
int main(){
	int n;
	int arr[100];
	arr[0] = 2;
	int arr2[31][31] = {0};
	 arr2[0][1] = 1;
	 for (int i = 1; i < 31; i++)
	 {
		 for (int j = 1;j < 31;j++) {
			 arr2[i][j] = arr2[i - 1][j - 1] + arr2[i - 1][j];
		 }
	 }
	while (scanf("%d",&n)!=EOF)
	{
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j <=i+1 ; j++)
			{
				if (j == n) {
					printf("%d", arr2[i][j]);
				}
				else
				{
					printf("%d ", arr2[i ][j]);

				}
			}
			arr[i+1] = right(i,arr[i],n,&count);
		}
		printf("\n");
	}

	return 0;
}