#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int num(char c) {
	return c - '0';
}
int zs(int x) {
	if (x ==2||x == 3)
	{
		return 1;
	}
	for (int i = 2; i*i <=x; i++)
	{
		if (x % i == 0)return 0;
	}
	return 1;
}
int main(){
	char a[1005] = { 0 };

	while (scanf("%s",a)!=EOF)
	{
		int len = strlen(a);
		int   flag = 1;
		int i = 0;
		for (; len-1-i>=2; i+=3)
		{
			if (!zs(num(a[i])*100+num(a[i+1])*10+num(a[i+2])))
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{

		switch (len-1-i)
		{
		case -1:break;
		case 0:if (!zs(num(a[i]))) { flag = 0; } break;
		case 1:if (!zs(num(a[i]) * 10 + a[i + 1])) { flag = 0;break; }
		default:
			break;
		}
		}
		if (flag)
		{
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}

	}
	
	return 0;
} 