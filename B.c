#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{

	int t;
	scanf("%d", &t) != EOF;
	
		if (t == 0)
		{
			printf("1\n");
			continue;
		}
		printf("5");
		for (int i = 0; i < t-1; i++)
		{
			printf("0");
		}
		printf("5");
		for (int i = 0; i < t - 1; i++)
		{
			printf("0");
		}
		printf("\n");
	
	}

	return 0;
}