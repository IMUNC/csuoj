#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
enum MyEnum
{
	a = 0, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z
};
int main(){

	char arr1[1002] = {0};
	char arr2[1002] = { 0 };
	while (scanf("%s",&arr1)!=EOF)
	{
		scanf("%s", &arr2);
		int len = strlen(arr1) <strlen(arr2) ? strlen(arr1) : strlen(arr2);
		switch (len == strlen(arr1))
		{
		case 1:
			for (int i = 0; i < len; i++)
		{
				if (arr1[i]+arr2[i]-'a'-'a'>25)
				{
					arr2[i] = arr1[i] + arr2[i] - 'a'-1 - 25;
				}
				else {
					arr2[i] = arr1[i] + arr2[i] - 'a';
				}
		}
			for (int i = 0; arr2[i]  !='\0'; i++)
			{
				printf("%c", arr2[i]);
			}
			printf("\n");
			break;
		case 0:
			for (int i = 0; i < len; i++)
			{
				if (arr1[i] + arr2[i] - 'a' - 'a' > 25)
				{
					arr1[i] = arr1[i] + arr2[i] - 'a' - 25-1;
				}
				else {
					arr1[i] = arr1[i] + arr2[i] - 'a';
				}
			}
			for (int i = 0; arr1[i] != '\0'; i++)
			{
				printf("%c", arr1[i]);
			}
			printf("\n");
			break;
		default:
			break;
		}
	}
	return 0;
}