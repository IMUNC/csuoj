#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y) {
	if (x<0)
	{
		x = -x;
	}

	if (y == 0)
	{
		return x;
	}
	return gcd(y, x % y,0);

}
int main()
{
	int a, b, c, d;
	char ch;

	while (~scanf("%d/%d%c%d/%d", &a, &b, &ch, &c, &d))
	{
		int temp;

		int flag = 0;

		int son, mother;
		if (ch == '+')
		{
			son = a * d + b * c;
			mother = b * d;
		}
		else
		{
			son = a * d - b * c;
			mother = b * d;
		}
		temp = son;
		son /= gcd(son, mother);
		mother /= gcd(temp, mother);
		if (son < 0)
		{
			flag = 1;
		}
		
		if (flag)
		{
			son = -son;
			if (son % mother == 0)
			{
				printf("-%d\n", son / mother);
			}
			else
			{

				if (son < mother)
				{
					printf("-%d/%d\n", son, mother);
				}
				else if (son > mother)
				{
					printf("-%d+%d/%d\n", (son + mother - 1) / mother, (-son + ((son + mother - 1) / mother) * mother), mother);
				}
			}

		}
		else
		{
			if (son % mother == 0)
			{
				printf("%d\n", son / mother);
			}
			else
			{

				if (son < mother)
				{
					printf("%d/%d\n", son, mother);
				}
				else if (son > mother)
				{
					printf("%d+%d/%d\n", son / mother, son - (son / mother) * mother, mother);
				}
			}
		}

	}
	return 0;
}