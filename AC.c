#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void upHalf(int x,int y) {
	if (y == 1)
	{
		for (int i = 1; i < x; i++)
		{

			printf("-");
		}
		printf("\n");
	}
	if (y == 2)
	{
		printf("\\");
		for (int i = 2; i < x - 1; i++)
		{

			printf(" ");
		}
		printf("/\n");
	}
	if (y>2)
	{
		for (int i = 0;i < y-2;i++) {
			printf(" ");
		}
		printf("\\");
		for (int i = 0; i < x+1-2*y; i++)
		{
			printf("*");
		}
		printf("/\n");
	}
}
void downPart(int x,int y) {
	if (y < x)
	{
		int i = 1;
		for (;i <= x-y-1;i++) {
			printf(" ");
		}
		printf("/");
		i++;
		for (; i <=x/2; i++)
		{
			if (i == x/2)
			{
				printf("*");
			}
			else { printf(" "); }
		}
		for (; i < y; i++)
		{
			printf(" ");
		}
		printf("\\\n");
	}
	else
	{
		for (int i = 1; i < x; i++)
		{

			printf("-");
		}
		printf("\n\n");
	}
}
int main(){

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int k;
		scanf("%d", &k);
		for (int j = 1;j <= k/2;j++) {
			upHalf(k, j);
		}
		for (int j = k/2+1; j <=k ; j++)
		{
			downPart(k, j);
		}
	}
	return 0;
}