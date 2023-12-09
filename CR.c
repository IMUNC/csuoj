#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int n;
	while (~scanf("%d",&n))
	{
		double sum = 0, price;
		for (int i = 0; i < n; i++)
		{
			scanf("%lf", &price);
			if (sum>=10&&sum<15)
			{
				sum += price * 0.8;
			}
			if (sum>=15&&sum<40)
			{
				sum += price * 0.5;
			}
			else {
				sum += price;
			}
		}
		if (sum>=100)
		{
			printf("Yes\n");

		}
		else
		{
			printf("No\n");
		}
	}

	return 0;
}