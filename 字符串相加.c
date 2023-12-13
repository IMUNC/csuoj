#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[1008] = { 0 };
	char b[1008] = { 0 };
	while (scanf("%s",a)!=EOF)
	{
		char c[1008] = { 0 };
		scanf("%s", b);
		int len = strlen(a) > strlen(b) ? strlen(b) : strlen(a);
		if (strlen(a)>strlen(b))
		{
		for (int i = 0; i < len; i++)
		{
			if (a[i]+b[i]-'a'>'z')
			{
				a[i] = a[i] + b[i] - 'a' - 26;
			}
			else
			{
				a[i] = a[i] + b[i] - 'a';
			}
		}
		strcpy(c, a);
		}
		else
		{
			for (int i = 0; i < len; i++)
			{
				if (a[i] + b[i] - 'a' > 'z')
				{
					b[i] = a[i] + b[i] - 'a' - 26;
				}
				else
				{
					b[i] = a[i] + b[i] - 'a';
				}
			}
			strcpy(c, b);
		}
		printf("%s\n", c);
	}

	return 0;
}