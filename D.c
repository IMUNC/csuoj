#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.14
#include<stdio.h>
#include<math.h>
int findMax(double x) {
	int k = 0;
	while ((x / pow(8, k)) != 0)
	{
		k++;
	}
	return k;
}
int main(){
	int n;
	
	while (scanf("%d",&n)!=EOF)
	{
		int a = 0,b = 0;
		
			for (int  j = 1; j <= n; j++)
			{
				int count0 = 0, count1 = 0;
				int i = j;
				while (i > 0) {
					if (i%2== 1)
					{
						count1++;
					}
					else
					{
						count0++;
					}
					i /= 2;
				}
				if (count0>=count1)
				{
					b++;
				}
				else {
					a++;
				}
			}
			printf("%d %d\n", a, b);
		
	}


	return 0;
}