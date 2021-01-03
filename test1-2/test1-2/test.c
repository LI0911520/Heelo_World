#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>

//#include<string.h>
//
//void Reverse(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char tem;
//	tem = *left;
//	*left = *right;
//	*right = tem;
//	left++;
//	right--;
//	}
//	
//}
//int main(void)
//{
//	char arr[100];
//	gets(arr);
//
//	Reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//
//	scanf("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//}


//水仙花数
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	
//	int i = 0;
//	
//	for (i = 0; i < 10000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp!=0)
//		{
//			
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("  %d",i);
//		}
//		
//
//	}
//	return 0;
//}


#include<stdio.h>

int   main(void)
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)//打印上半部分
	{
		int j = 0;
		for (j = 0; j <line-1-i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");

		}
		for (j = 0; j <2*(line-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



























