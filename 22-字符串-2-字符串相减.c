#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[10050] = { 0 };
	char b[10050] = { 0 };
	while (fgets(a,10050,stdin)!=NULL)
	{
		int mark[10050] = { 0 };
		fgets(b, 10050, stdin);
		int lena = strlen(a) ;
		int lenb = strlen(b) ;
		for (int i = 0; i < lenb; i++)
		{
			mark[b[i]] = 1;
		}
		for (int i = 0; i < lena; i++)
		{
			if (!mark[a[i]])printf("%c", a[i]);
		}
		printf("\n");
	}

	return 0;
}