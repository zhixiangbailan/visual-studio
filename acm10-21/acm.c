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
//	//��һ����ѭ����������������
//	int con2 = 0;//�����µ�con2���ǵڶ��ֵ���������
//	for (i = n; i <= m; i++)
//	{
//		for (j = 2; j <= i; j++)//�ظ�ѭ��һ��
//		{
//			if (j == i)
//			{
//				con2++;
//				printf("%d ", i);//�����������������
//				if (con2 % 10 == 0);//��������10��ʱ�����һ������
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
//��1--1000�ڵ�������������

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int con = 0;
//	
//	for (x = 2; x < 1000; x++)    //��2��1000֮��������
//	{
//		for (i = 2; i < x; i++)   //�Գ������ܲ��ܱ�x��������2��ʼ�ң�ֱ������x
//		{
//		
//			if (x % i == 0)   //�ҵ��ܱ�x����������
//			{
//				con++;
//				break;
//			}
//		}
//		if (x == i)   //�ҵ���x���Ҳû�б������ģ�֤��������
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