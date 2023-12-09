#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long long a[500][500];
int n, m;
int main(){
	while (scanf("%d %d",&n,&m)!=EOF)
	{
		for (int i = 0;i < n;i++) {
			for (int j = 0; j < m; j++)
			{
				scanf("%lld", &a[i][j]);
			}
		}
		for (int i = 1; i < m; i++)
		{
			a[0][i] += a[0][i - 1];
		}
		for (int i = 1; i < n; i++)
		{
			a[i][0] += a[i - 1][0];
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 1; j < m; j++)
			{
				a[i][j] += a[i - 1][j] > a[i][j - 1] ? a[i - 1][j] : a[i][j - 1];
			}
		}
		printf("%lld\n", a[n - 1][m - 1]);
	}

	return 0;
}