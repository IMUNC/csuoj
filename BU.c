#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int x) {
	int ss = 0;
	while (x>0)
	{
		ss += x % 10;
		x /= 10;
	}
	while (ss>=10)
	{
		ss = f(ss);
	}
	return ss;
}
int main(){
	int m;
	while (scanf("%d",&m)!=EOF)
	{
		long long  a;
		int sum = 0;
		for (int i = 0;i < m;i++) {
			scanf("%lld", &a);
			sum += f(a);
		}
		printf("%d", sum);
	}

	return 0;
}