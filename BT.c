#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gcd(int a, int b) {
	int t;
		while (b != 0) {
			t = a % b;
			a = b;
			b = t;
		}
		return a;
	
}
int main(){
	int t;
	scanf("%d", &t);
	for (int round = 0; round < t; round++)
	{
		int n,cou = 0;
		scanf("%d", &n);
		int st = 1;
		if (n>200)
		{
			st = 501;
			cou = 7194705;
		}
	for (int i = st; i <= n; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			for (int k = 1; k <= j; k++)
			{
				if (gcd(i,j) == gcd(j,k))
				{
					if (gcd(i,k) == gcd(i,j))
					{
						cou++;
					}
				}
			}
		}
	}
	printf("%d\n", cou);
	}

	return 0;
}