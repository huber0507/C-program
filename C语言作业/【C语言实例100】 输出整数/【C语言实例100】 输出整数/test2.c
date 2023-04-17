#define _CRT_SECURE_NO_DEPRECATE 1
//2023年2月3日14:26:54  [C语言实例2]  输出整数
#include<stdio.h>
int main()
{
	printf("请输入一个整数：" );
	int number;
	scanf("%d", &number);
	printf("你输入的整数是：%d\n", number);
	return 0;
}