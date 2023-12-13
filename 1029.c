#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int sd = 0; sd < n; sd++)
	{
		int m,p = 0;
		scanf("%d", &m);
		char arr[100][15] = { 0 };
		getchar();
		for (int i = 0; i < m; i++)
		{
			fgets(arr[i],8, stdin);
			if (arr[i][0] == 'S')
			{
				int num;
				scanf("%d", &num);
				if (i!=m-1)
				{
					getchar();
				}
				arr[i][0] = arr[num-1][0];
			}
			if (arr[i][0] == 'L')
			{
				p--;
			}
			else if (arr[i][0] == 'R') {
				p++;
			}
			}
		
		printf("%d\n", p);

	}

	return 0;
}