#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	long long d;
	
	while (scanf("%lld",&d)!=EOF)
	{
		char a[1000] = {0};
		sprintf(a, "%o", d);
		printf("%s\n", a);
	}
	return 0;
}