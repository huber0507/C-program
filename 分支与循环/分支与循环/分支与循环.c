#define _CRT_SECURE_NO_DEPRECATE 1

#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   //�����ַ�������  ������ֵ
//		putchar(ch);
//	return 0;
//
// }

/*�ָ���-----------------------------------------------------------------------*/


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������password��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//
//}


/*�ָ���-----------------------------------------------------------------------*/

//int main()
//{
//	int i = 0;
//	for (i = 1; i <=10; i++)  //���1~10������  ����forѭ����C�����о���������forѭ��
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/
/*����n�Ľ׳�*/

//int main()
//{
//	int i ,n ;
//	scanf("%d", &n);
//	double sum = 1;
//	for (i = 1; i <= n; i++)
//		sum = sum * i;
//		printf("%d!=%lf\n", n, sum);
//	
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/
/*����1��+2��+3��....+n!*/

//int main()
//{
//	int i = 0;
//	int n = 0; 
//	int m = 1;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		m = i*m ;
//		sum = sum + m;
//	}
//		printf("sum=%d\n", sum);
//	
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/


//���ֲ��ҷ�

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 1;   //���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//
//}

/*�ָ���-----------------------------------------------------------------------*/

//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/

/*2023��2��22��23:17:21 �ϴ�github */
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������������������룺>\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
//	}
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/
/*2023��2��23��10:40:41*/
/*����3�������Ӵ�С���*/
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������3�����֣�>(�м��Կո�Ϊ���)");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/

/*��ӡ1-100֮��3�ı���*/

//int main()
//{
//	int a = 0;
//	for (a = 0; a < 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d,", a);
//		}
//	}
//}


/*�ָ���-----------------------------------------------------------------------*/

/*��2�����ֵ����Լ��*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������2�����֣�>");
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*��ӡ����*/

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		
//	}
//	printf("\n1000��2000��֮�������������%d", count);
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*��ӡ����*/

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 300; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*��ӡ0-100֮����������9�ĸ���*/

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*�������*/


//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i < 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*�����ֵ*/

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


/*�ָ���-----------------------------------------------------------------------*/
//


/*�žų˷���*/

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*�ָ���-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*�����ֵ*/

/*2023��2��24��22:52:36  �ϴ�github*/
//#define MAX_ASCII 127
//
//int main()
//{
//	char num, enter;
//	int temp = 1;
//	for (; temp > 0;)
//	{
//		printf("---------------------------------\n");
//		printf("|**-----------��ʼ------------**|\n");
//		printf("|**ASCII       ת  �ַ�  ��: 1**|\n");
//		printf("|**�ַ�        ת  ASCII ��: 2**|\n");
//		printf("|**           ����       ��: 0**|\n");
//		printf("---------------------------------\n");
//		scanf("%d", &temp);
//		if (temp == 1)
//		{
//			printf("��������ֵС��%d�������ַ���>", MAX_ASCII);
//			scanf("%d", &num);
//			printf("ACSIIdeΪ%d,��Ӧ���ַ�Ϊ%c \n", num, num);
//		}
//		if (temp == 2)
//		{
//			printf("������һ���ַ���>\n");
//			scanf("%c", &enter);
//			scanf("%c", &num);
//			printf("     %c ��ASCIIΪ  %d    \n", num, num);
//		}
//	}
//}


/*2023��4��17��22:21:06*/
/*����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���*/
//#include<stdio.h>
//
//int main()
//{
//	char c;
//	int letters = 0, spaces = 0, digits = 0, others = 0;
//	printf("������һЩ��ĸ��\n");
//	while ((c=getchar())!='\n')   //ѭ��������־Ϊ\n
//	{
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))   //����û������ʲôд��
//			letters++;
//		else if (c >= '0' && c <= '9')							//����û������ʲôд��
//			digits++;
//		else if (c == ' ')
//			spaces++;
//		else
//			others++;
//	}
//	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n", letters, spaces, digits, others);
//	return 0;
//}


/*2023��4��17��23:01:30*/
/*��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿���*/

//#include<stdio.h>
//int main()
//{
//	int s = 0, a, n, t;
//	printf("������a��n:\n");
//	scanf("%d%d", &a, &n);
//	t = a;
//	while (n > 0)
//	{
//		s += t;
//		a = a * 10;
//		t += a;
//		n--;
//	}
//	printf("a+aa+aaa....=%d\n", s);    //2023��4��17��23:07:12  ��û�����ף�̫����    2023��4��18��23:27:37  �Ѿ�ʹ�ü��Ӵ�����������
//
//	return 0;
//}



/*2023��4��18��23:29:42*/

/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ���������*/


//#include<stdio.h>
//#define N 1000   //������ֵ��ΧΪ1000
//
//int main()
//{
//	int i, j, k, n, sum;
//	int a[256];                 //�����ʲô����û������ʲô��˼
//	for (i = 2; i <= N; i++)     //
//	{
//		sum = a[0] = 1;
//		k = 0;
//		for (j = 2; j <= (i / 2); j++)
//		{
//			if (i% j == 0)
//			{
//				sum += j;
//				a[++k] = j;
//			}
//		}							//���Ҳ��������ʲô��˼
//		if (i == sum)
//		{
//			printf("%d=%d", i, a[0]);
//			for (n = 1; n <= k; n++)
//				printf("+%d", a[n]);
//			printf("\n");
//		}
//	}
//	return 0;
//}

/*2023��4��20��22:29:29*/
/*һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�*/

#include<stdio.h>

int main()
{
	float h, s;
	h = s = 100;
	h = h / 2;   //��һ�η����ĸ߶�
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	printf("��10�����ʱ��������%f�ף���10�η���%f��\n", s, h);
	return 0;

}