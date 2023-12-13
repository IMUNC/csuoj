#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int len;
	while (scanf("%d",&len)!=EOF)
	{
		int arr[50];
		for (int i =0; i < len; i++)
		{
			arr[i] = i + 1;
		}
		while (len>2)
		{
			int k = 1;
		for (int i = 1; i < len; i+=2)
		{
			printf("%d ", arr[i]);
			arr[k] = arr[i+1];
			k++;
		}
			len -= len / 2;
		}

		printf("\n%d %d\n", arr[0], arr[1]);
	}

	return 0;
}