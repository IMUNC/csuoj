#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	int a, b,cou =0;
	char c,c1,c2;

	while (scanf("%d",&a)!=EOF)
	{
		scanf("%c%d=%c%c", &c, &b, &c1, &c2);
		int res;
		if (c1 == '?')
		{
			continue;
		}
		if (c2 == '\n')
		{
			res = c1 - '0';
		}
		else
		{
			char c3;
			scanf("%c", &c3);
			if (c3 =='\n')
			{

			res = (c1 - '0') * 10 + c2 - '0';
			}
			else
			{
				res = (c1 - '0') * 100 + (c2 - '0')*10+c3-'0';

			}
		}
		switch (c)
		{
		case '+': {
			if (a+b == res)
			{
				cou++;
			}
			break;
		}
		case '-': {
			if (a-b == res)
			{
				cou++;
			}
			break;
		}
		default:
			break;
		}
	}
	printf("%d\n", cou); 
	return 0;
}