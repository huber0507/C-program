#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

//int main()
//{
//    int i, j, k;
//    printf("\n");
//    for (i = 1; i < 5; i++) { // 以下为三重循环
//        for (j = 1; j < 5; j++) {
//            for (k = 1; k < 5; k++) { // 确保i、j、k三位互不相同
//                if (i != k && i != j && j != k) {       //这段代码2023年10月12日22:18:19我现在想明白了，今天考虑了一天都没有明白是怎么回事；
//                                                          //这个其实就是C语言存在这个运算优先级，这就导致这个是先计算“!=”再计算“&&”
//                    printf("%d,%d,%d\n", i, j, k);
//                }
//            }
//        }
//    }
//}


#include<stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) {
                if ((i != k) && (i != j) && (k != j)) {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}