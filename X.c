#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int n)
{
    if (n == 1)
        return 1;
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = 2 * f;
    }
    return f;
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int t;
		scanf("%d", &t);
		printf("%d\n", fun(t));

	}
	return 0;
}