#define _CRT_SECURE_NO_DEPRECATE 1

#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   //输入字符或数字  返回其值
//		putchar(ch);
//	return 0;
//
// }

/*分割线-----------------------------------------------------------------------*/


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放至password中
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//
//}


/*分割线-----------------------------------------------------------------------*/

//int main()
//{
//	int i = 0;
//	for (i = 1; i <=10; i++)  //输出1~10的数字  采用for循环，C语言中尽量都采用for循环
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


/*分割线-----------------------------------------------------------------------*/

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

/*分割线-----------------------------------------------------------------------*/
/*计算n的阶乘*/

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


/*分割线-----------------------------------------------------------------------*/
/*计算1！+2！+3！....+n!*/

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


/*分割线-----------------------------------------------------------------------*/


//二分查找法

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 1;   //左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了,下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//
//}

/*分割线-----------------------------------------------------------------------*/

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

/*分割线-----------------------------------------------------------------------*/

/*2023年2月22日23:17:21 上传github */
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入密码：>\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出程序\n");
//	}
//	return 0;
//}

/*分割线-----------------------------------------------------------------------*/
/*2023年2月23日10:40:41*/
/*输入3个数，从大到小输出*/
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入3个数字：>(中间以空格为间隔)");
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

/*分割线-----------------------------------------------------------------------*/

/*打印1-100之间3的倍数*/

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


/*分割线-----------------------------------------------------------------------*/

/*求2个数字的最大公约数*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入2个数字：>");
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

/*分割线-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*打印闰年*/

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
//	printf("\n1000到2000年之间的闰年总数是%d", count);
//	return 0;
//}

/*分割线-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*打印素数*/

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


/*分割线-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*打印0-100之间整数出现9的个数*/

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


/*分割线-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*分数求和*/


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


/*分割线-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*求最大值*/

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


/*分割线-----------------------------------------------------------------------*/
//


/*九九乘法表*/

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

/*分割线-----------------------------------------------------------------------*/
//
//int main()
//{
// 
//	return 0;
//}

/*求最大值*/

/*2023年2月24日22:52:36  上传github*/
//#define MAX_ASCII 127
//
//int main()
//{
//	char num, enter;
//	int temp = 1;
//	for (; temp > 0;)
//	{
//		printf("---------------------------------\n");
//		printf("|**-----------开始------------**|\n");
//		printf("|**ASCII       转  字符  按: 1**|\n");
//		printf("|**字符        转  ASCII 按: 2**|\n");
//		printf("|**           结束       按: 0**|\n");
//		printf("---------------------------------\n");
//		scanf("%d", &temp);
//		if (temp == 1)
//		{
//			printf("请输入数值小于%d的任意字符：>", MAX_ASCII);
//			scanf("%d", &num);
//			printf("ACSIIde为%d,对应的字符为%c \n", num, num);
//		}
//		if (temp == 2)
//		{
//			printf("请输入一个字符：>\n");
//			scanf("%c", &enter);
//			scanf("%c", &num);
//			printf("     %c 的ASCII为  %d    \n", num, num);
//		}
//	}
//}


/*2023年4月17日22:21:06*/
/*输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数*/
//#include<stdio.h>
//
//int main()
//{
//	char c;
//	int letters = 0, spaces = 0, digits = 0, others = 0;
//	printf("请输入一些字母：\n");
//	while ((c=getchar())!='\n')   //循环结束标志为\n
//	{
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))   //这里没明白是什么写的
//			letters++;
//		else if (c >= '0' && c <= '9')							//这里没明白是什么写的
//			digits++;
//		else if (c == ' ')
//			spaces++;
//		else
//			others++;
//	}
//	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, spaces, digits, others);
//	return 0;
//}


/*2023年4月17日23:01:30*/
/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制*/

//#include<stdio.h>
//int main()
//{
//	int s = 0, a, n, t;
//	printf("请输入a和n:\n");
//	scanf("%d%d", &a, &n);
//	t = a;
//	while (n > 0)
//	{
//		s += t;
//		a = a * 10;
//		t += a;
//		n--;
//	}
//	printf("a+aa+aaa....=%d\n", s);    //2023年4月17日23:07:12  还没想明白，太困了    2023年4月18日23:27:37  已经使用监视窗口想明白了
//
//	return 0;
//}



/*2023年4月18日23:29:42*/

/*一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数*/


//#include<stdio.h>
//#define N 1000   //定义数值范围为1000
//
//int main()
//{
//	int i, j, k, n, sum;
//	int a[256];                 //这个是什么，我没明白是什么意思
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
//		}							//这段也看不懂是什么意思
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

/*2023年4月20日22:29:29*/
/*一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/

#include<stdio.h>

int main()
{
	float h, s;
	h = s = 100;
	h = h / 2;   //第一次反弹的高度
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	printf("第10次落地时，共经过%f米，第10次反弹%f米\n", s, h);
	return 0;

}