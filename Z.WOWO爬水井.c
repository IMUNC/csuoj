#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){

	double h, u, d, f;
	while (scanf("%lf %lf %lf %lf",&h,&u,&d,&f))
	{
		if (h == 0)
		{
			break;
		}
		double dec = u * (f / 100);
		double len = 0;int day = 1;
		if (h<u)
		{
			printf("success on day %d\n",day);continue;
		}
		 if(u<d)
		{
			printf("failure on day %d\n",day);continue;

		}
		len = u - d;
		do
		{
			u -= dec;
			if (u<0)
			{
				u = 0;
			}
			len += u -d;

			day++;
		} while ((len + d) < h && len >= 0);
		
		if (len<0)
		{
			printf("faliure on day %d\n", day);
		}
		else {
			printf("success on day %d\n", day);
		}
	}
	return 0;
}