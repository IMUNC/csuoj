#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct team
{
	char name[21];
	int score ;
};
int main(){

	int n,s1,s2;
	while (~scanf("%d", &n))
	{


		struct team teamarr[10] = {0};
	struct team temp;
	struct team* p = teamarr;
		char* ap = NULL;
		char temparr[45] = { 0 };
		char tarr[30] = { 0 };
	scanf("%s", &temparr);
	ap = strchr(temparr, ':');
	strcpy(p->name, ap + 1);
	
	for (int i = 0; i < ap-temparr; i++)
	{
		(p + 1)->name[i] = temparr[i];
	}
	scanf("%d:%d", &s1, &s2);
	if (s1<s2)
	{
		p->score += 3;
	}
	else if (s2 < s1) {
		(p + 1)->score += 3;
	}
	else
	{
		(p + 1)->score += 1;
		p->score += 1;

	}
	int cou = 2;

		for (int s = 1; s < n*(n - 1) / 2; s++)
		{
			memset(temparr, 0, 45);
			memset(tarr, 0, 30);

			int flag = 1;
			int win;
		scanf("%s", &temparr);
		scanf("%d:%d", &s1, &s2);
		if (s1>s2)
		{
			win = 1;
		}
		else if (s1<s2)
		{
			win = 2;
		}
		else {
			win = 0;
		}
		ap = strchr(temparr, ':');
		for (int i = 0; i < cou; i++)
		{
			if (strcmp(ap + 1, (p + i)->name) == 0) {
				if (win == 2)
				{

				(p + i)->score += 3;
				}
				else if (win == 0) {
					(p + i)->score += 1;
				}
				flag = 0;
			}
		}
		if (flag)
		{
			strcpy((p + cou )->name, ap + 1);
			if (win == 2)
			{
				(p + cou)->score += 3;
			}
			if (win == 0)
			{
				(p + cou)->score += 1;

			}
			cou++;
		}
		flag = 1;
		for (int i = 0; i < ap - temparr; i++)
		{
			tarr[i] = temparr[i];
		}
		for (int i = 0; i < cou; i++)
		{
			if (strcmp(tarr, (p + i)->name) == 0) {
				if (win == 1)
				{
					(p + i)->score += 3;
				}
				if (win == 0)
				{
					(p + i)->score += 1;

				}
				flag = 0;
			}
		}
		if (flag)
		{
			strcpy((p + cou )->name, tarr);
			if (win == 1)
			{
				(p + cou)->score += 3;
			}
			if (win == 0)
			{
				(p + cou)->score += 1;

			}
			cou++;
		}

		}
		for (int i = 0; i < cou-1; i++)
		{
			for (int j = 0;j < cou - 1 - i;j++) {
				if (teamarr[j].score<teamarr[j+1].score)
				{
					temp = teamarr[j];
					teamarr[j] = teamarr[j +1 ];
					teamarr[j + 1] = temp;
				}
					if (teamarr[j].score == teamarr[j + 1].score)
					{
						if (strcmp(teamarr[j].name, teamarr[j + 1].name) > 0) {
							temp = teamarr[j];
							teamarr[j] = teamarr[j + 1];
							teamarr[j + 1] = temp;
						}
					}
			}
		}
		for (int i = 0; i < cou; i++)
		{
			if (i!=cou-1)
			{

			printf("%s ", (p + i)->name);
			}
			else
			{
				printf("%s", (p + i)->name);

			}
		}
	
		printf("\n");
	}
	return 0;
}