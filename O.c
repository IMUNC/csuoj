#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){

	int n;
	while (1)
	{
		scanf("%d", &n);
		if (n == 1)
		{
			printf("0\n");
			break;
		}
		if (n == 0)break;
		long long sum =1;
		int cou = 0;
		while (sum<n)
		{
			cou++;
			sum *= 3;
		}
		printf("%d\n", cou);
	}
	return 0;
}