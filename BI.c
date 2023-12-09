#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[404] = { 0 }, b[404] = { 0 };
	while (scanf("%s %s",a,b)!=EOF)
	{
		char aa[404] = { 0 }, bb[404] = { 0 };
		char *pa, *pb;
		int count = 0;
		pa = strchr(a, '.');
		pb = strchr(b, '.');
		
		if (pa!=NULL)
		{

		strcpy(aa, pa + 1);
		}
		if (pb!=NULL)
		{
			strcpy(bb, pb + 1);
		}
		if (pa!=NULL&&pb == NULL)
		{
			strcpy(aa, pa + 1);
		}
		if (pa == NULL&&pb!=NULL)
		{
			strcpy(aa, pb + 1);
		}
		if (pa!=NULL&&pb!=NULL)
		{
			*pa = '\0';
			*pb = '\0';
		for (int i = strlen(aa)<strlen(bb)?strlen(aa):strlen(bb)-1; i >= 0; i--)
		{
			if (aa[i]+bb[i]-'0'+count <= '9')
			{
				aa[i] = aa[i] + bb[i] - '0';
			count = 0;
			}
			else {

				aa[i] = aa[i] + bb[i] - '0'-10+count;
				count = 1;
			}
		}
		char* p = aa + strlen(aa);
		if (strlen(bb)>strlen(aa))
		{
			for (int i = strlen(aa);p < aa + strlen(bb);p++) {
				*p = *(b + i); 
				i++;
			}
		}
		for (int i = strlen(aa)-1;i >= 0;i--) {
			if (aa[i] == '0')
			{
				aa[i] = '\0';
			}
			else
			{
				break;
			}
		}
		int lena = strlen(a);
		int lenb = strlen(b);
		if (strlen(a)>strlen(b))
		{
			for (int i =0;i<lenb;i++)
			{

				if (a[lena-1-i] + b[lenb - 1 - i] - '0' + count <= '9')
			{
					a[lena - 1 - i] = a[lena-1-i] + b[lenb  - 1 - i] - '0' + count;
				count = 0;
			}
			else {
					a[lena - 1 - i] = a[lena - 1 - i] + b[lenb - 1 - i] - '0' + count -10;
				count = 1;
			}
			}
			if (count)
			{
				printf("1");
			}
			for (int i = 0; i <lena; i++)
			{
				printf("%c", a[i]);
			}	
		}
		else
		{
			for (int i = 0; i < lena; i++)
			{

				if ( a[lena-1-i] + b[lenb-1-i] - '0' + count <= '9')
				{
					b[lenb - 1 - i] = a[lena - 1 - i] + b[lenb - 1 - i] - '0' + count;
					count = 0;
				}
				else {
					b[lenb - 1 - i] = a[lena - 1 - i] + b[lenb - 1 - i] - '0' + count-10;

					count = 1;
				}
			}
			if (count)
			{
				printf("1");
			}
			for(int i = 0; i < lena; i++)
			{
				printf("%c", b[i]);
			}
		}
		}
		if (strlen(aa)!=0)
		{
			printf(".%s", aa);
		}
		printf("\n");
	}

	return 0;
} 