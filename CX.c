#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble(int arr0[], int lenth) {
	int temp;
	for (int i = 0; i < lenth-1; i++)
	{
		for (int j = 0;j < lenth - 1 - i;j++) {
			if (arr0[j]>arr0[j+1])
			{
				temp = arr0[j];
				arr0[j] = arr0[j + 1];
				arr0[j + 1] = temp;
			}
		}
	}
}
int main(){
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int arr[101] = {0};
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		bubble(arr, n);
		int sum = arr[0];
		int flag = 1;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] <= sum) {
				flag = 0;
				break;
			}
			sum += arr[i];
		}
		if (flag)
		{
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}

	}

	return 0;
}