
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
//#include<stdio.h>

//int main(void)
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)
//	{
//		arr[i][0] = 1;
//		for (j = 0; j < 7; j++)
//		{
//			if (i == j)
//				arr[i][j] = 1;
//			if (i>1 && j>0)
//			{
//				arr[i][j] = arr[i-1][j] + arr[i-1][j - 1];
//			}
//		
//		}
//	}
//	for (i = 0; i < 7; i++)
//	{
//		
//
//		for (j = 0; j <=i; j++)
//		{
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	float a, b, c;
//	float sum;
//	scanf("%f %f %f", &a, &b, &c);
//	sum = a + b + c;
//	printf("%.2f %.2f", sum, sum / 3);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int H = 0;
//	int M = 0;
//	int S = 0;
//	long s = 0;
//	scanf("%ld", &s);
//	H = s / 3600;
//	M = s % 3600 / 60;
//	S = s % 3600 % 60;
//	printf("%d %d %d", H, M, S);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	long b = 0;
//	scanf("%d", &a);
//	b = a * 31560000;
//	printf("%ld", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a = 0.0;
//	int b = 0;
//	scanf("%f", &a);
//	printf("%d", b = (int)a % 10);
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a + b) % 100);
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
//	printf("%d%d%d%d", d, c, b, a);
//	return 0;
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a%b);
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	a = (-8 + 22) * 40 - 10 + 212 / 2;
//	printf("%d", a);
//}
//
//
//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int num = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	num = a;
//	a = b;
//	b = num;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month;
//	int date;
//
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%0004d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//
//
//
//}









#include<stdio.h>
int main()
{
	printf("%C%C%C%C%C%C%C%C%C%C%C%C",
		73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
}