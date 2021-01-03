#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(void)
//{
//
//	int arr[3][4] = { 0 };
//
//	printf("%d\n", sizeof(arr));      //48
//	printf("%d\n", sizeof(arr[0][0]));//4
//	printf("%d\n", sizeof(arr[0]));   //16
//	printf("%d\n", sizeof(arr[0] + 1));//4
//	printf("%d\n", sizeof(*(arr[0] + 1)));//4
//	printf("%d\n", sizeof(arr + 1));   //4
//	printf("%d\n",sizeof( *(arr + 1)));         //16
//
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", sizeof(*(&arr[0] + 1)));//16
//	printf("%d\n", sizeof(*arr));//16
//	printf("%d\n", sizeof(arr[3]));//16
//	return 0;
//}


//int main(void)
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *prt = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(prt - 1));//2,5
//	return 0;
//}
//struct test
//{
//	int Num;
//	char *pcName;
//	short sData;
//	char cha[2];
//	short sBa[4];
//}* p;
//假设p 的值为0x100000，如下表达式的值是多少？
//int main(void)
//{
//	printf("%p\n",  p+1);                 //0x00100014
//	printf("%p\n", (unsigned long)p + 1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 1);//0x00100004
//}

//int main(void)
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x\n",ptr1[-1], *ptr2);
//}

int main(void)
{
	int a[3][2] = { (0, 1), (2, 3), (3, 4) };
	int *p;
	p = a[0];
	printf("%d\n", p[0]);
}