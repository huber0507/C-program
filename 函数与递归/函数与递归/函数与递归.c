#define _CRT_SECURE_NO_DEPRECATE 1

#define _CRT_SECURE_NO_DEPRECATE 1

/*2023��3��12��22:36:38*/
/*���������������*/


//#include<stdio.h>
//
//int main()
//{
// system("chcp 65001 && cls");
//	int i, j;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//				printf("%c%c", 219, 219);
//			else
//				printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int main(void)
//{
//	system("chcp 65001 && cls");
//	int i, j;
//	SetConsoleOutputCP(437);
//	char a = 176, b = 219;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i == j || (i + j + 1) == 5)
//				printf("%c", b);
//			else
//				printf("%c%c", a, a);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	system("chcp 65001 && cls");
//	char a = 176, b = 219;
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", a, a, b, a, a);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	return 0;
//}


/* 2023��3��9��16:24:30 */
/*д�������ж��Ƿ�Ϊ����*/

//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int n)
//{
//	int l = 0;
//	for (l = 2; l <= sqrt(n); l++)
//		if (n % l == 0)
//			break;
//	if (l <= sqrt(n))
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	//��ӡ100-200֮�������
//	for (i = 100; i <= 150; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


///*д�������ж��Ƿ�Ϊ����*/
//
//#include<stdio.h>
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


/*д�������ж��Ƿ�Ϊ����*/

//#include<stdio.h>




/*2023��3��11��10:59:05*/
/*д��������n�Ľ׳�*/

//#include<stdio.h>
//
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("���������֣�>");
//	scanf("%d", &n);
//	printf("%d", Fac2(n));
//	return 0;
//}


/*2023��3��12��22:40:31*/
/*��ӡ¥��*/

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	printf("\1\1\n");//���2��Ц��
//	for (i = 1; i < 11; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%c%c", 219, 219);
//			printf("\n");
//		}
//	}
//	return 0;
//}


/*2023��3��12��22:45:11*/
/*쳲���������*/

//#include<stdio.h>
//int main()
//{
//	int f1 = 1, f2 = 1, i;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12d%12d", f1, f2);
//		//if (i % 2 == 0)printf("\n");
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//
//	return 0;
//}


/*2023��3��22��22:31:37*/
/*�ж�101-200֮�������*/

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		//�ж�ѭ���Ƿ���ǰ���������j<i,˵����2-j֮�䣬i�п���������
//		if (j >= i)
//		{	count++;
//				printf("%d ", i);
//				//5������ͻ���
//			if (count % 5 == 0)
//				printf("\n");
//		}
//	}
//	return 0;
//}


/*2023��4��11��22:48:34*/
/*��ӡˮ�ɻ���*/


//#include<stdio.h>
//
//int main()
//{
//	int i, b, c, d;
//	for (i=100;i<=999;i++)
//	{
//		�ж���������Ƿ�Ϊˮ�ɻ���
//		b = i % 10;
//		c = i / 10 % 10;
//		d = i / 100 % 10;
//		if (i == (b * b * b + c * c * c + d * d * d))  
//			printf("%d\n", i);
//	}
//	return 0;
//
//}


/*2023��4��11��22:54:18*/
/*��һ���������ֽ�������*/

//
//#include<stdio.h>
//int main()
//{
//    int n, i;
//    printf("������������");
//    scanf("%d", &n);
//    printf("%d=", n);
//    for (i = 2; i <= n; i++)
//    {
//        while (n % i == 0)
//        {
//            printf("%d", i);
//            n /= i;
//            if (n != 1) printf("*");
//        }
//    }
//
//    printf("\n");
//    return 0;
//}


/*2023��4��16��22:01:20*/
/*���������*/


#include<stdio.h>

int main()
{
    int score;
    char grade;
    printf("�����������");
    scanf("%d", &score);
    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
    printf("%c\n", grade);
    return 0;
}