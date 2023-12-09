#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int zs(int x) {
	if (x == 2)
	{
		return 1;
	}
	if (x == 1) {
		return 0;
	}
	if (x%2==0)
	{
		return 0;
	}
	for (int j = 2; j <= sqrt(x); j++)
	{
		if (x%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int wzs(int x) {
	while (x>0)
	{
		if (x%10 == 2|| x % 10 == 3|| x % 10 == 5|| x % 10 == 7) {
		x /= 10;
			continue;
		}
		x /= 10;
		return 0;
	}
	return 1;
}
int main(){
	int k;
	while ((scanf("%d", &k))!=EOF)
	{
	int count = 0, a = 200000000;
	for (int i = 2; i < 100; i++)
	{
		if (wzs(i)||zs(i)) {
			count++;
			if (count == k)
			{
				printf("%d\n", i);
				break;
			}
		}
		
	}
	}
	return 0;
}