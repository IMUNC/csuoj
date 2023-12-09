#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int s;
	scanf("%d", &s);
	for (int p = 0; p < s; p++)
	{

	int y, m, d;
	scanf("%d-%d-%d", &y, &m, &d);
	
		long long  day = 1;
		if (y == 2021)
		{
			printf("1\n");
			continue;
		}
		for (int i = y+1; i < 2021; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
				day += 366;
			}
			else
			{
				day += 365;
			}
		}
		for (int i = 12; i >m ; i--)
		{
			switch (i) {
			case 12: day += 31;break;
			case 11: day += 30;break;
			case 10: day += 31;break;
			case 9: day += 30;break;
			case 8: day += 31;break;
			case 7: day += 31;break;
			case 6: day += 30;break;
			case 5: day += 31;break;
			case 4: day += 30;break;
			case 3: day += 31;break;
			case 2: { if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
				day += 28;
			}
				  else
			{
				day += 27;
			};break;}
			default:break;
			}
		}
		switch (m) {
		case 12: day += 32-d;break;
		case 11: day += 31-d;break;
		case 10: day += 32-d;break;
		case 9: day += 31-d;break;
		case 8: day += 32-d;break;
		case 7: day += 32-d;break;
		case 6: day += 31-d;break;
		case 5: day += 32-d;break;
		case 4: day += 31-d;break;
		case 3: day += 32-d;break;
		case 2: { if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			day += 28;
		};break;}
		case 1: day += 32 - d;break;
		}
		printf("%lld\n", day);
	}

	return 0;
}