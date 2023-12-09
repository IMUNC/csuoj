#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble(int arr[],int len) {
	for (int i = 0; i < len-1; i++)
	{
		int temp = 0;
		for (int j = 0;j < len - 1 - i;j++) {
			if (arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j ] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){
	int t;
	while (scanf("%d", &t) != EOF) {

	int arr1[5100] = { 0 }, arr2[5100] = {0},i1=0,i2=0,n;
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		if (n%2!=  0)
		{
			arr1[i1] = n;
			i1++;
		}
		else
		{
			arr2[i2] = n;
			i2++;
		}
	}
	bubble(arr1,i1);
	bubble(arr2,i2);
	for (int i = 0; i < i1-1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("%d ", arr1[i1-1]);
	printf("\n");
	for (int i = 0; i < i2-1; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("%d ", arr1[i2 - 1]);
	printf("\n");
	}

	return 0;
}