#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char s[410] = { 0 };
	char d[410] = { 0 };
	while (scanf("%s %s",s,d)!=EOF)
	{
		//定义两个用来保存小数部分的数组
		char xss[410] = { 0 };
		char xsd[410] = { 0 };
		char xs[410] = { 0 };
		char zs[410] = { 0 };
		//查找是否有小数点
		char* ps = strchr(s, '.');
		char* pd = strchr(d, '.');
		int flag = 0;
		//进位
		int jw = 0;
		if (ps !=NULL)
		{
			*ps = '\0';
			strcpy(xss, ps + 1);
		}
		if (pd!=NULL)
		{
			*pd = '\0';
			strcpy(xsd, pd + 1);
		}
		if (ps!=NULL&&pd!=NULL)
		{
			int len = strlen(xss) > strlen(xsd) ? strlen(xss) : strlen(xsd);
			if (len == strlen(xss))
			{
				for (int i = strlen(xsd) - 1;i >= 0;i--) {
					if (xss[i]+xsd[i]+jw-'0'>'9')
					{
						xss[i] = xss[i] + xsd[i] + jw - '0' - 10;
						jw = 1;
					}
					else
					{
						xss[i] = xss[i] + xsd[i] + jw - '0';
						jw = 0;
					}
				}
				strcpy(xs, xss);
			}
			else
			{

				for (int i = strlen(xss) - 1;i >= 0;i--) {
					if (xsd[i] + xss[i] + jw - '0' > '9')
					{
						jw = 1;
						xsd[i] = xss[i] + xsd[i] + jw - '0' - 10;
					}
					else
					{
						xsd[i] = xss[i] + xsd[i] + jw - '0';
						jw = 0;
					}
				}
				strcpy(xs, xsd);
			}
			 len = strlen(xs);
			int i = len-1;
			while (xs[i]=='0')
			{
				xs[i] = '\0';
				i--;
			}
		}
		else if (ps == NULL&&pd!=NULL)
		{
			strcpy(xs, xsd);
		}
		else if (ps != NULL && pd == NULL) {
			strcpy(xs, xss);
		}
		if (strlen(s)>strlen(d))
		{
			int len = strlen(d);
			for (int i = len-1,j = strlen(s)-1; i >= 0; i--)
			{
				if (s[j] + d[i] + jw - '0' > '9') {
					s[j] = s[j] + d[i] + jw - '0' - 10;
					jw = 1;
				}
				else
				{
					s[j] = s[j] + d[i] + jw - '0';
					jw = 0;
				}
				j--;
			} 
			strcpy(zs, s);

		}
		else
		{

			int len = strlen(s);
			for (int i = len - 1, j = strlen(d) - 1; i >= 0; i--)
			{
				if (d[j] + s[i] + jw - '0' > '9') {
					d[j] = s[i] + d[j] + jw - '0' - 10;
					jw = 1;
				}
				else
				{
					d[j] = s[i] + d[j] + jw - '0';
					jw = 0;
				}
				j--;
			}
			strcpy(zs, d);
		}
		if (jw)
		{
			printf("1");
		}
		
		printf("%s", zs);
		if (strlen(xs)>0)
		{
			printf(".%s", xs);
		}
		printf("\n");
	}

	return 0;
} 