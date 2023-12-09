#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct  ss
{
	char name[11];
	int sum;
	int yuwen;
	int math;
	int english;

};
void printSum(struct ss arr1[], int len, struct ss temp) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < len - 1 - i;j++) {
			if (arr1[j].sum>arr1[j+1].sum)
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
			else if(arr1[j].sum == arr1[j + 1].sum)
			{ 
				if (strcmp(arr1[j].name , arr1[j + 1].name)<0)
				{
					temp = arr1[j];
					arr1[j] = arr1[j + 1];
					arr1[j + 1] = temp;
				}
			}
		}
	}
	for (int i = len - 1; i > len - 4; i--)
	{
		printf("%s %d\n", arr1[i].name, arr1[i].sum);
	}printf("\n");
}
void printYuwen(struct ss arr1[], int len, struct ss temp) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < len - 1 ;j++) {
			if (arr1[j].yuwen > arr1[j + 1].yuwen)
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
			else if (arr1[j].sum == arr1[j + 1].sum)
			{
				if (strcmp(arr1[j].name, arr1[j + 1].name) < 0)
				{
					temp = arr1[j];
					arr1[j] = arr1[j + 1];
					arr1[j + 1] = temp;
				}
			}
		}
	}
	for (int i = len-1; i >len-4; i--)
	{
		printf("%s %d\n", arr1[i].name, arr1[i].yuwen);
	}printf("\n");
}
void printMath(struct ss arr1[], int len, struct ss temp) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < len - 1 ;j++) {
			if (arr1[j].math > arr1[j + 1].math)
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
			else if (arr1[j].math == arr1[j + 1].math)
			{
				if (strcmp(arr1[j].name, arr1[j + 1].name) < 0)
				{
					temp = arr1[j];
					arr1[j] = arr1[j + 1];
					arr1[j + 1] = temp;
				}
			}
		}
	}
	for (int i = len - 1; i > len - 4; i--)
	{
		printf("%s %d\n", arr1[i].name, arr1[i].math);
	}printf("\n");
}
void printEnglish(struct ss arr1[], int len, struct ss temp) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < len - 1 ;j++) {
			if (arr1[j].english > arr1[j + 1].english)
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
			else if (arr1[j].english == arr1[j + 1].english)
			{
				if (strcmp(arr1[j].name, arr1[j + 1].name) < 0)
				{
					temp = arr1[j];
					arr1[j] = arr1[j + 1];
					arr1[j + 1] = temp;
				}
			}
		}
	}
	for (int i = len-1; i >len-4 ;i--)
	{
		printf("%s %d\n", arr1[i].name, arr1[i].english);
	}printf("\n");
}

int main(){
	int n;
	while (~scanf("%d",&n))
	{
	struct ss arr[102], temp0 = {0};
		for (int i = 0; i < n; i++)
		{
			scanf("%s", &arr[i].name);
			scanf("%d", &arr[i].yuwen);
			scanf("%d", &arr[i].math);
			scanf("%d", &arr[i].english);
			arr[i].sum = arr[i].english + arr[i].math + arr[i].yuwen;
		}
		printSum(arr, n, temp0);
		printYuwen(arr, n, temp0);
		printMath(arr, n, temp0);
		printEnglish(arr, n, temp0);
		
	}

	return 0;
}