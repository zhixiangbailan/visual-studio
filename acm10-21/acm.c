#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i, q, w, e,r,N;
//	int con = 0;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)
//	{
//		e = r * r;
//		r = i;
//		for()
//	}
//
//	
//
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		if (i % 6 == 0 || i % 10 == 0 || i % 14 == 0 || i % 15==0 || i % 21 == 0 || i % 35 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i,N,con=0;
//	scanf("%d", &N);
//	for(i=1;i<=N;i++)
//		if (i * i % 10 == i || i * i % 100 == i||i*i%1000==i||i*i%10000==i)
//		{
//			con++;
//		}
//	printf("%d", con);
//
//	return 0;
//}
//int main()
//{
//	int n, sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//
//	}
//	if (sum == n)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
//int main()
//{
//	int q, w, e, r, i=1000;
//	
//	for (i = 1000; i <= 9999; i++)
//	{
//		q = i / 1000;
//		w = i % 1000 / 100;
//		e = i % 100 / 10;
//		r = i % 10;
//		if (q + w + e + r == 10)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i,j;
//	int con = 0;
//	for (i = n; i <= m; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (j == i)
//			{
//				con++;
//				break;
//			}
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//	}
//	printf("%d\n", con);
//
//	//第一部分循环完成输出素数个数
//	int con2 = 0;//定义新的con2来记第二轮的素数个数
//	for (i = n; i <= m; i++)
//	{
//		for (j = 2; j <= i; j++)//重复循环一遍
//		{
//			if (j == i)
//			{
//				con2++;
//				printf("%d ", i);//输出满足条件的素数
//				if (con2 % 10 == 0);//当数量到10的时候输出一个换行
//				{     con2 = 0;           //
//					printf("\n");//
//				}
//				break;
//			}
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//	}
//	return 0;
//}
//求1--1000内的质数（素数）

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int con = 0;
//	
//	for (x = 2; x < 1000; x++)    //在2到1000之间找质数
//	{
//		for (i = 2; i < x; i++)   //试除法，能不能被x整除，从2开始找，直到等于x
//		{
//		
//			if (x % i == 0)   //找到能被x整除的数了
//			{
//				con++;
//				break;
//			}
//		}
//		if (x == i)   //找到和x相等也没有被整除的，证明是质数
//		{
//			con++;
//			printf("%d ", x);
//
//		}
//	}
//	printf("\n\n\n");
//
//	return 0;
//}
//int main()
//{
//	int i, q, w, e;
//	for (i = 100; i <= 999; i++)
//	{
//		q = i / 100;
//		w = i % 100 / 10;
//		e = i % 10;
//		if (w > q && w > e)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}