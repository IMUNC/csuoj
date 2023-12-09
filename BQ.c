#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h> 
void bubble(int arr[],int len){
	for (int i = 0; i < len-1; i++)
		{
		int flag = 1;
		for (int j = 0; j < len-1-i; j++)
		{
			int temp;
			if (arr[i]>arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				flag = 0;
			}
		}
		if (flag )
		{
			break;
		}
		}
	}
void twomin(int arr[10002], int len, int k) {
	int l1 = arr[k];
	int s = k,temp;
	for (int i = k; i < len; i++)
	{
		if (arr[i] < l1) {
			l1 = arr[i];
			s = i;
		}
	}
	temp = arr[k];
	arr[k] = arr[s];
	arr[s] = temp;
	s = k + 1;
	int l2 = arr[k + 1];
	for (int i = k+1; i < len ; i++)
	{
		if (arr[i] < l2) {
			l2 = arr[i];
			s = i;
		}
	}
	temp = arr[k+1];
	arr[k+1] = arr[s];
	arr[s] = temp;
	arr[k + 1] = arr[k] + arr[k + 1];
	arr[k] = 0;
}
int main(){

	int n;
	while (scanf("%d",&n)!=EOF)
	{
		long long sum = 0;
		int arr[10002] = {0};
		bubble(arr, n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int i = 0;
		for (int i = 0; i < n - 1; i++)
		{
			arr[i + 1] = arr[i] + arr[i + 1];
			sum += arr[i + 1];
			if (arr[i+1]>1000)
			{

			}
			arr[i] = 0;
			if (sum > 1000)break;
		}
		printf("%lld\n", sum);
	}
	return 0;
}