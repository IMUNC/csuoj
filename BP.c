#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct performance
{
	char name[5];
	int sum;
	int per[3] ;

};
int main(){
	int k;
	struct performance n[1005] = { 0 }, temp;
	while (~scanf("%d", &k))
	{

	for (int i = 0; i < k; i++)
	{
		scanf("%s", n[i].name);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &n[i].per[j]);
		}
		n[i].sum = n[i].per[0] + n[i].per[1] + n[i].per[2];

		
	}
	for (int i = 0; i < k - 1; i++)
	{
		int flag = 1;
		for (int j = 0;j < k - 1 - i;j++) {
			if (n[j].sum < n[j + 1].sum)
			{
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
				flag = 0;
			}
			else if (n[j].sum == n[j + 1].sum)
			{
				if (strcmp(n[j].name, n[j + 1].name) > 0)
				{
					temp = n[j];
					n[j] = n[j + 1];
					n[j + 1] = temp;
					flag = 0;
				}
			}
		}
		if (flag)
		{
			break;
		}
	}
	printf("BEST\n");
		printf("%s ", n[0].name);
		printf("%d ", n[0].sum);
		printf("%d ", n[0].per[0]);
		printf("%d ", n[0].per[1]);
		printf("%d\n", n[0].per[2]);
		for (int i = 1; i <= k-2; i++)
		{
			if (n[0].sum == n[i].sum) {
				printf("%s ", n[i].name);
				printf("%d ", n[i].sum);
				printf("%d ", n[i].per[0]);
				printf("%d ", n[i].per[1]);
				printf("%d\n", n[i].per[2]);
			}
		}
		printf("WORST\n");
		printf("%s ", n[k-1].name);
		printf("%d ", n[k-1].sum);
		printf("%d ", n[k-1].per[0]);
		printf("%d ", n[k-1].per[1]);
		printf("%d\n", n[k-1].per[2]);
		printf("\n");
	}
	return 0;
}