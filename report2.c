#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main(){
	int  d;
	scanf("%d", &d);
	for (int j = 4; j <= d; j++)
	{
	int sum = 1;
	int i = 2;
	for (; i * i < j; i++)
	{
		if (j % i == 0)
		{
			sum += i;
			sum += j / i;
		}

	}
	if (i * i == j)
	{
		sum += i;
	}
	if (sum == j)
	{
		printf("%d\n", j);
	}
	}
	return 0;
}