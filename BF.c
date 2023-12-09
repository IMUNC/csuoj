#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print1(int x, int y) {
	for (int i = x; i < y; i++)
	{
		printf(" ");
	}
	printf("*\n");
}
int main(){

	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for (int i = 1; i < n; i++)
		{
			print1(i, n);
		}
		for (int i = 0; i < n; i++)
		{
			printf("*");
		}
		printf("\n");
		for (int i = 1; i < n; i++)
		{
			print1(i, n-1);
		}
		printf("\n");
	}
	return 0;
} 