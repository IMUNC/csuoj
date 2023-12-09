
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[10002] = {0};
	while (scanf("%s", &a) != EOF) {
		int len = strlen(a)-1;
		int flag = 1;
		int i = len / 2;
		while (flag&&i>=0)
		{
			
			if (a[i] == a[len-i])
			{
				if (a[i] == '9') {
					a[i] = a[len - i] = '0';
				}
				else
				{
					a[i] = a[len - i] = a[i] + 1;
					flag = 0;
				}
			}
			else
			{
				a[i] = a[len - i] = a[i]>a[len-i]?a[i]:a[i]+1;
				flag = 0;
			} 
			i--;
		}
		for ( ; i >=0;i--)
		{
			if (a[i] != a[len - i]) { a[len-i] = a[ i]; }
		}
		if (flag)
		{
			printf("1");
			a[len] = '1';
		printf("%s\n", a);
		}
		else
		{

		printf("%s\n", a);
		}

	}

	return 0;
}