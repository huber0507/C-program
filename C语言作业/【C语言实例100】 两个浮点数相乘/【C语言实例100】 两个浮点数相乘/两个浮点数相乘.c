#define _CRT_SECURE_NO_DEPRECATE 1
/*2023��2��22��23:36:01*/
#include<stdio.h>
int main()
{
	double a, b, c;
	printf("������2����������>(�м��Կո�Ϊ���)");
	scanf("%lf %lf", &a, &b); 
	c = a * b;
	printf("���=%.2lf", c);  //�������2λС��
	return 0;
}