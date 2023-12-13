#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n, m, a[1001] = {0};
void bubble() {
	for (int i = 0; i < n-1; i++)
	{
	int flag = 1;
		for (int j = 0;j < n - 1 - i;j++) {
			if (a[j]>a[j+1])
			{
				int temp = a[j];	
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}
//动态规划dp数组
// 背包问题
//例如：寻找容量为100的背包的最大，而此时有一个容积为20的物品，即为寻找容量为80的最大，继续往下迭代。
int main(){
	while (scanf("%d",&n)!=EOF)
	{
		int dp[1005] = { 0 };
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		bubble();
		int res;
		if (m<5)
		{
			res = m;
		}
		else
		{

		for (int i = 0; i < n-1; i++)
		{
			for (int j = m - 5;j >= a[i];j--) {
				dp[j] = dp[j] > (dp[j - a[i]] + a[i]) ? dp[j] : (dp[j - a[i]] + a[i]);
			}
		}
		res =  m - dp[m - 5] - a[n-1];
		}
		printf("%d\n", res);
	}

	return 0;
}