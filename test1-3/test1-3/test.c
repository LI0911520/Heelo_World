#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	unsigned char  a = 100;
//	unsigned char  b = 200;
//	unsigned char  c = 0;
//	c = a + b;
//	printf("%d,%d", a + b, c);
//
//}
//
#include<stdio.h>

int main(void)
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		arr[i][0] = 1;
		for (j = 0; j < 7; j++)
		{
			if (i == j)
				arr[i][j] = 1;
			if (i>1 && j>0)
			{
				arr[i][j] = arr[i-1][j] + arr[i-1][j - 1];
			}
		
		}
	}
	for (i = 0; i < 7; i++)
	{
		

		for (j = 0; j <=i; j++)
		{
			
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}