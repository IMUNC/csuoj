#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}
void inttostring(int x, char* a) {
	int i = 0;
	while (x>0)
	{
		a[i] = x % 10 + '0';
		x /= 10;
		i++;
	}
	for (int j = 0; j <= (i-1)/2; j++)
	{
		swap(&a[j], &a[i - 1 - j]);
	}
}
int main(){
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		char a[100000] = { 0 };
		char* p = &a[0];
		for (int i = 1; i <= n; i++)
		{
			char s[10] = { 0 };
			inttostring(i, s);
			sprintf(p, "%s", s);
			if (i<10)
			{
				p += 1;
			}
			else if (i < 100) {
				p += 2;
			}
			else if (i<1000)
			{
				p += 3;
			}
			else if (i < 10000) {
				p += 4;
			}
		}
		printf("%c\n", a[n-1]);
	}

	return 0;
} 