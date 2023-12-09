#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct performance
{
	char name[4];
	float average;

};
int main(){
	int k;
	struct performance n[1005] = {0},temp;
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%s", n[i].name);
		float sum = 0;
			float score[5];
		for (int j= 0; j < 5; j++)
		{
			scanf("%f", &score[j]);
			sum += score[j];
		}
		float max = score[0], min = score[0];
		for (int j = 1; j < 5; j++)
		{
			if (score[j]>max)
			{
				max = score[j];
			}
			if (score[j]<min)
			{
				min = score[j];
			}
		}
		
		n[i].average =(sum-max-min)/3 ;
	}

	for (int i = 0; i < k-1; i++)
	{
	int flag = 1;
		for (int j = 0;j < k - 1 - i;j++) {
			if (n[j].average<n[j+1].average)
			{
				temp = n[j];
				n[j] = n[j+1];
				n[j + 1]= temp;
				flag = 0;
			}
			else if(n[j].average  ==  n[j + 1].average)
			{
				if (strcmp(n[j].name,n[j+1].name)>0)
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
		for (int i = 0; i < k; i++)
		{
			printf("%s ", n[i].name);
			printf("%.2f\n", n[i].average);
		}

	return 0;
}