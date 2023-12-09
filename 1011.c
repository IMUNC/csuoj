#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int f(char* arr, int* len) {
	int fl = 1;
	for (int i = 0; i < *len; i++)
	{
		if (arr[i] == arr[i+1])
		{
			for (int j = i; j < *len-2; j++)
			{
				arr[j] = arr[j + 2];
			}
			*len -= 2;
			return 1;
		}

	}
	return 0;
	
}
int main(){
	char arr[100001] = { 0 };
	scanf("%s", &arr);
	int flag = 1;
	int slen = strlen(arr);
	while (flag)
	{
		flag = f(arr, &slen);
	}
	for (int i = 0; i < slen; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}