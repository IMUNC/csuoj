#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		int arr[10], i = 0,tem = 0;
		if (a>b)
		{
			while (b  > 0) {
				tem = a % 10 + b % 10;
				if (tem>=10)
				{
					tem -= 10;
				}
				arr[i]=tem ;
				i++;
				a /= 10;
				b /= 10;
			}
			if (a > 0)
			{
				printf("%d", a);
			}
		}
		else
		{
			while (a > 0) {
				tem = a % 10 + b % 10;
				if (tem >= 10)
				{
					tem -= 10;
				}
				 arr[i]=tem ;
				i++;
				a /= 10;
				b /= 10;
			}
		if (b>0)
		{
			printf("%d", b);
		}
		}
		int flag = 0;
		if (a==0&&b==0)
		{
			flag = 1;
		}
		for (int j = i-1; j >=0 ; j--)
		{
			if (flag)
		{
			if (arr[j] != 0)
			{
				printf("%d", arr[j]);
				flag = 0;
				continue;
			}
			else
			{
				continue;
			}
		}
			printf("%d", arr[j]);
		}
		printf("\n");
	}

	return 0;
}