#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

//int main()
//{
//    int i, j, k;
//    printf("\n");
//    for (i = 1; i < 5; i++) { // ����Ϊ����ѭ��
//        for (j = 1; j < 5; j++) {
//            for (k = 1; k < 5; k++) { // ȷ��i��j��k��λ������ͬ
//                if (i != k && i != j && j != k) {       //��δ���2023��10��12��22:18:19�������������ˣ����쿼����һ�춼û����������ô���£�
//                                                          //�����ʵ����C���Դ�������������ȼ�����͵���������ȼ��㡰!=���ټ��㡰&&��
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