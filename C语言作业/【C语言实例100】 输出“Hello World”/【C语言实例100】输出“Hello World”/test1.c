#define _CRT_SECURE_NO_DEPRECATE 1
//2023年2月3日14:26:54  [C语言实例1]  输出 "Hello, World!"

#include<stdio.h>
void main()    //此地方不建议写成 void  为更好移植性，建议采用int main   
			  //区别在于有无返回值，void无，int有，int main可在后面加return 0 解决，
{
	printf("Hello World");
	//return 0;
}