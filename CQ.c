#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int h, m, s,ss;
	while (scanf("%d:%d:%d+%d",&h,&m,&s,&ss)!=EOF)
	{
		if (ss >= 3600)
		{
			h += ss / 3600;
		}
		ss %= 3600;
		if (ss >=60)
		{
			m += ss / 60;
			
		}
		ss %= 60;
		s += ss;
		m += s / 60;
		h += m / 60;
		s %= 60;
		m %= 60;
		h %= 24;

		if (h<10)
		{
			printf("0%d:", h);
		}
		else {
			printf("%d:", h);
		}
		if (m < 10)
		{
			printf("0%d:", m);
		}
		else {
			printf("%d:", m);
		}
		if (s < 10)
		{
			printf("0%d\n", s);
		}
		else {
			printf("%d\n", s);
		}
	}

	return 0;
}