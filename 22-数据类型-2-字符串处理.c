#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[100005];
	while (scanf("%s",&a)!=EOF)
	{
		int len = strlen(a);
		for (int i = 0;i < len;i++) {
			if (a[i]>='A'&&a[i]<='Z')
			{
				printf("%c", a[i]);
			}
		}		
		printf("\n");
		for (int i = 0;i < len;i++) {
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				printf("%c", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
} 