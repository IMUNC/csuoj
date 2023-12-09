#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		long long x, n,flag = 0,count = 0;
		scanf("%lld", &x);
		scanf("%lld", &n);
		long long base = x;
		for (int i = 1; i < n; i++)
		{
			x *= base;
			if (x>998244353)
			{
				flag=x;
				count++;
				x = 1;
			}
		}
		long long yuflag = flag % 998244353;
		long long res;
		if (count == 0)
		{
			res = x;
		}
		else if (count == 1)
		{
			res = (yuflag * (x % 998244353))% 998244353;
		}
		else
		{
			int count2 = 0;
			res = (yuflag * yuflag) % 998244353;
			for (int i = 1; i < count / 2; i++)
			{
				res *= (yuflag * yuflag) % 998244353;
				if (res > 998244353)
				{
					flag = res;
					count2++;
					res = 1;
				}
			}
			if (count > 2 && count % 2 == 1)
			{
				res = ((res % 998244353) * yuflag) % 998244353;
			}
		}
		printf("%lld\n", res);
	}

	return 0;
}