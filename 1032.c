#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n;
long long jiecheng(int a,int b) {
	long long res = 1;
	for (int i = b; i <= a; i++)
	{
		res *= i;
	}
		return res;
}
int main(){
	while (scanf("%d",&n)!=EOF)
	{
		printf("%lld\n", (n+1+2)*n/2);
	}

	return 0;
}