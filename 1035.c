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
//��̬�滮dp����
// ��������
//���磺Ѱ������Ϊ100�ı�������󣬶���ʱ��һ���ݻ�Ϊ20����Ʒ����ΪѰ������Ϊ80����󣬼������µ�����
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