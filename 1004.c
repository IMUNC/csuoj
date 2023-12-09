#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int n, m, a, b;
double rate[2002][2002] = {0}, p[2002];//比例数组
double c;//费用比例
int flag[2002] = {0};//标记求出最小的点
int continueLoop() {
	for (int i = 1; i <=n; i++)
	{
		if (flag[i] == 0)return 1;
	}
	return 0;
}
void init() {
	memset(rate, 0, sizeof(rate));
	memset(p, 0x43, sizeof(p));
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %lf", &a, &b, &c);
		rate[a][b] = rate[b][a] = c / 100 + 1;

	}
	scanf("%d %d", &a, &b);
	p[b] = 100;
	flag[b] = 1;
}
void dijkstra() {
	int min = 2000;
	for (int i = 1; i <= n&&rate[b][i]!=0; i++)
	{
		p[i] = p[b] * rate[b][i];
		if (p[i]<min)
		{
			min = i;
		}
	}
	flag[min] = 1;
	while (continueLoop)
	{

	}
}
int main(){
	init();
	dijkstra();
	return 0;
}