#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int a[101][101],n;

int main(){
	while (scanf("%d",&n)!=EOF)
	{

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1;j <= i;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 2; i <= n; i++)
	{
		a[i][1] += a[i - 1][1];
		for (int j = 2;j < i;j++) {
			a[i][j] += a[i - 1][j]>a[i-1][j-1]?a[i-1][j]:a[i-1][j-1];
		}
		a[i][i] += a[i - 1][i - 1];
	}
	int max = a[n][1];
	for (int i = 1; i <= n; i++)
	{
		if (a[n][i]>max)
		{
			max = a[n][i];
		}
	}
	printf("%d\n", max);
	}

	return 0;
} 