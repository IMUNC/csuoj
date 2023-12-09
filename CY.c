#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int zdgys(int x, int y) {
	int z = y;
	while (x%y!=0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return z;
}
int main(){

	char arr[202] = { 0 };
	int numarr[202] = { 0 };
	while (fgets(arr,202,stdin)!=NULL)
	{
		int len =strlen(arr)-1, count = 0;
		int j = 0;
		for (int i = 0; i < len; i++)
		{
			if (arr[i] == ' ')
			{
				count++;
				numarr[j] = i;
				j++;
			}

		}
		int i = numarr[j - 1];
		int num = zdgys(len, count + 1);
		for (; j-1 >= 0; j--)
		{
			int i = numarr[j - 1];
			int  s = numarr[i] + 1;
			for (;arr[s] != ' ' && arr[s] != '\0';s++) {
				int  s = numarr[i] + 1;
				printf("%c", arr[s]);
			}
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}