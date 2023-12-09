#include<math.h>
#include<stdio.h>
int sushu(int m)
{
	if (m == 1 || m == 0)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(m); i++)
	{
		if (m % i == 0)
			return 0;
	}
	return 1;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1001] = { 0 };
	while (~scanf("%s", arr))
	{
		int len = strlen(arr); int b = 0, flag1 = 1, flag2 = 0;
		for (int i = 0; i <= len - len % 3 - 1; i += 3)
		{
			b = (arr[i] - '0') * 100 + (arr[i + 1] - '0') * 10 + (arr[i + 2] - '0');
			if (!sushu(b))
			{
				flag1 = 0; break;
			}
		}
		if (len % 3 == 0)
			flag2 = 1;
		else if (len % 3 == 1)
		{
			if (sushu(arr[len - 1] - '0'))
				flag2 = 1;
		}
		else if (len % 3 == 2)
		{
			int m;
			m = (arr[len - 2] - '0') * 10 + arr[len - 1] - '0';
			if (sushu(m))
				flag2 = 1;
		}
		if (flag1 && flag2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

