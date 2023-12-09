#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int n, a[1000];
	while (scanf("%d",&n)!=EOF)
	{
		int f[1000], cou = 0;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &f[i]);cou++;
		}
		for (int i = 1; i < cou; i++)
		{
			f[i] = f[i] + f[i - 1];
		}
		int m;
			scanf("%d", &m);
			int num;
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &num);
			if (num<=f[0])
			{
				printf("1\n");
				continue;	
			}
			for (int j = 1; j < cou; j++)
			{
				if (num>f[j-1]&&num<=f[j])
				{
					printf("%d\n",j + 1);
					break;
				}
			}
		}
	}

	return 0;
}