#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

int main()
{
	double i;
	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
	printf("请输入当月你的净利润是：\n");
	scanf("%lf", & i);   //2023年10月13日11:27:56当时这里我写成了lf%，VS未识别出问题
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	if (i <= 100000) {
		bonus = i * 0.1;
	}
	else if (i <= 200000) {
		bonus = bonus1 + (i - 100000) * 0.075;
	}
	else if (i <= 400000) {
		bonus = bonus2 + (i - 200000) * 0.05;
	}
	else if (i <= 600000) {
		bonus = bonus4 + (i - 400000) * 0.03;
	}
	else if (i <= 1000000) {
		bonus = bonus6 + (i - 600000) * 0.015;
	}
	else if (i > 1000000) {
		bonus = bonus10 + (i - 1000000) * 0.01;
	}
	printf("提成是：bonus=%lf", bonus);

	printf("\n");


	return 0;
}

//
//#include<stdio.h>
//int main()
//{
//    double i;
//    double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//    printf("你的净利润是：\n");
//    scanf("%lf", &i);
//    bonus1 = 100000 * 0.1;
//    bonus2 = bonus1 + 100000 * 0.075;
//    bonus4 = bonus2 + 200000 * 0.05;
//    bonus6 = bonus4 + 200000 * 0.03;
//    bonus10 = bonus6 + 400000 * 0.015;
//    if (i <= 100000) {
//        bonus = i * 0.1;
//    }
//    else if (i <= 200000) {
//        bonus = bonus1 + (i - 100000) * 0.075;
//    }
//    else if (i <= 400000) {
//        bonus = bonus2 + (i - 200000) * 0.05;
//    }
//    else if (i <= 600000) {
//        bonus = bonus4 + (i - 400000) * 0.03;
//    }
//    else if (i <= 1000000) {
//        bonus = bonus6 + (i - 600000) * 0.015;
//    }
//    else if (i > 1000000) {
//        bonus = bonus10 + (i - 1000000) * 0.01;
//    }
//    printf("提成为：bonus=%lf", bonus);
//
//    printf("\n");
//}




//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015年 菜鸟教程. All rights reserved.

#include <stdio.h>

void output(long int b, long int i) {
	printf("\n%ld = 800 * %ld + 9 * %ld\n", b, i, i);
}


int main() {

	void output(long int b, long int i);
	long int a, b, i;
	a = 809;
	for (i = 10; i < 100; i++) {
		b = i * a;
		if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100) {
			output(b, i);
		}
	}
	return 0;
}