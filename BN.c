#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int x, int y)
{
	char ch = 'a' + x+1;
	for (int i = x+2; i <= y; i++)
	{
		printf(" ");
	}
	for (int i = 0; i <= x; i++)
	{
		ch -= 1;
		printf("%c",ch );
	}
	for (int i = 1; i <=x ; i++)
	{
		ch += 1;
		printf("%c", ch );
	}
	printf("\n");
}
int main(){
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for (int i = 0;i < n;i++) {
			print(i, n);
		}
	}

	return 0;
}