#define _CRT_SECURE_NO_DEPRECATE 1
/*2023年2月22日23:36:01*/
#include<stdio.h>
int main()
{
	double a, b, c;
	printf("请输入2个浮点数：>(中间以空格为间隔)");
	scanf("%lf %lf", &a, &b); 
	c = a * b;
	printf("结果=%.2lf", c);  //结果保留2位小数
	return 0;
}