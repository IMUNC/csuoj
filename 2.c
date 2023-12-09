#include<stdio.h>
#include<stdlib.h>
void huajian(int* x, int* y,int flag1) {
	int temp;
	while (*y%*x!=0)
	{
		int flag1 = 0;
		if (flag1)
		{
			*x = -*x;
		}
		temp = *x;
		*y = *y % *x;
		*x = temp;
		if (flag1)
		{
			*x = -*x;
		}
	}
}
int main()
{
	int a, b, c, d;
	char ch;
	
	while (~scanf("%d/%d%c%d/%d", &a, &b, &ch, &c, &d))
	{
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
		if (son<0)
		{
			flag = 1;
		}
		huajian(&son, &mother,flag);
		if (flag)
		{
			son = -son;
			if (son%mother == 0)
			{
				printf("-%d\n", son / mother);
			}
			else
			{

			if (son<mother)
			{
				printf("-%d/%d\n", son, mother);
			}
			else if (son>mother)
			{
				printf("-%d + %d/%d\n", (son + mother - 1) / mother, (-son + ((son + mother - 1) / mother) * mother), mother);
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
					printf("%d + %d/%d\n", son / mother, son - (son / mother) * mother, mother);
				}
			}
		}

	}
	return 0;
}