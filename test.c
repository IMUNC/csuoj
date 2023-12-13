#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int panduan(int a, char arr[1000], int lenth) {
	int flag = 1;
	while (a>0)
	{
		for (int i = 0;i < lenth;i++) {
			if (a%10==arr[i]-'0')
			{
				break;
			}
			else if(i == lenth -1)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
		a /= 10;
	}
	return flag;
}
int main(){
	char k[1000] = {0};
	while ((scanf("%s",&k))!=EOF)
	{
		int len = strlen(k);
		int count = 0;
		int num1 = 0, num2 = 0,result = 0;
	for (int bai=  0 ;bai<len  ; bai++)
	{
		for (int shi = 0; shi < len; shi++)
		{
			for (int ge = 0;ge < len;ge++) {
				for (int shi2 = 0; shi2 < len; shi2++)
				{
					for (int ge2 = 0;ge2 < len;ge2++) 
					{
						if (k[bai]!=0&&k[ge2!=0])
						{

						num1 = (k[bai]-'0') * 100 + (k[shi]-'0') * 10 + (k[ge]-'0');
						num2 = (k[shi2]-'0') * 10 + (k[ge2]-'0');
						result = num1 * num2;
						if (result%10000==0 )
						{

						if (panduan(result, k, len)&&panduan(num1*(k[shi2] - '0'), k, len) && panduan(num1 * (k[ge2] - '0'), k, len))
						{
							count++;
							printf("<%d>\n", count);
							printf("%5d\n", num1);
							printf("X%4d\n", num2);
							printf("-----\n");
							printf(" %4d\n", num1 * (k[ge2]-'0'));
							printf("%-5d\n", num1 *( k[shi2]-'0'));
							printf("-----\n");
							printf("%5d\n", num1 * num2);
							printf("\n");
						}
						}
						else
						{
							if (panduan(result, k, len) && panduan(num1 * (k[shi2] - '0'), k, len) && panduan(num1 * (k[ge2] - '0'), k, len))
							{
								count++;
								printf("<%d>\n", count);
								printf("%5d\n", num1);
								printf("X%4d\n", num2);
								printf("-----\n");
								printf("%5d\n", num1 * (k[ge2] - '0'));
								printf("%-5d\n", num1 * (k[shi2] - '0'));
								printf("-----\n");
								printf("%5d\n", num1 * num2);
								printf("\n");
							}
						}
						}
					}
					}
				}
			}
		}
	if (count == 0)
	{
		printf("The number of solutions: 0\n");
	}
	else
	{
		printf("The number of solutions: %d", count);
	}
	}


	return 0;
}