#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[1008] = {0};
	while (fgets(a,1008,stdin)!=NULL)
	{
		int len = strlen(a);
		char b[26] = "VWXYZABCDEFGHIJKLMNOPQRSTU";
		for (int i = 0; i < len; i++)
		{
			if (a[i]>='A'&&a[i]<='Z') {
				a[i] = b[a[i] - 'A'];
			}
		}
		fputs(a, stdout);
	}

	return 0;
}