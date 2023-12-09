#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void printfup(int x, int sum) {
	int i = 1;char ch = 'a'-1;
	for (; i <= sum-x; i++)
	{
		printf(" ");
	}
	for (; i <=sum; i++)
	{
		ch++;
		printf("%c", ch);
	}
	for (; i <=sum+x-1 ; i++)
	{
		ch--;
		printf("%c", ch);
	}
	for (; i <= 2*sum-1; i++)
	{
		printf(" ");
	}printf("\n");
}
void printfdown(int x, int sum) {
	int i = 1,flag = 0;
	for (; i <= x-sum-1; i++)
	{
		printf(" ");
	}
		
		printf("a");
		i++;
	for (; i <=3*sum -x-1 ; i++)
	{
		
		printf(" ");
		flag = 1;
	}
	if (flag)
	{

	printf("a");
	i++;
	}
	for (; i <= 2 * sum - 1; i++)
	{
		printf(" ");
	}printf("\n");
}
int main(){

	int z;
	scanf("%d", &z);
	for (int lt = 0; lt < z;lt++)
	{
		int n;
		scanf("%d", &n);
		for (int i = 1; i <=n ; i++)
		{
			printfup(i, n);
		}
		for (int i = n+1; i <= 2*n; i++)
		{
			printfdown(i, n);
		}
		printf("\n");
	}
	return 0;
}