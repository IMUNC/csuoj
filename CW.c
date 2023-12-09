#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void printUp(int x,int total) {
	for (int i = 0; i <= total - x; i++)
	{
		printf(" ");
	}
	for (int i = 0; i < 2*x-1; i++)
	{
		printf("*");
	}
	printf("\n");
}
void printDown(int total) {
	for (int i = 0; i < total; i++)
	{
		printf(" ");
	}
		printf("*");
	
		printf("\n");
}
int main(){
			int k;
	while (scanf("%d", &k) !=EOF)
	{
	
			
			
			for (int j= 1;j  <=k; j++)
			{
				printUp(j, k);
			}
			for (int m = 0; m < 2*k+1; m++)
			{
				printf("*");
			}
			printf("\n");
			for (int j = 1; j <= k; j++)
			{
				printDown(k);
			}
		
	}

	return 0;
}