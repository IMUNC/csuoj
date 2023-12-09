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
int main(){
	while (scanf("%d",&n)!=EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		bubble();
		int i = 0;
		while (m>= 5&&i<n)
		{
			m -= a[i];
			i++;
		}
		if (m<5)
		{
			m = m + a[i-1] - a[n - 1];
		}
		printf("%d\n", m);
	}

	return 0;
}