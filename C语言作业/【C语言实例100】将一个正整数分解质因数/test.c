#include<stdio.h>
int main()
{
    int n, i;
    printf("请输入整数：");
    scanf("%d", &n);
    printf("%d=", n);
    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            if (n != 1) printf("*");
        }
    }

    printf("\n");
    return 0;
}



//int  main ()
//{
	
	//printf("2858");
//}


//2023年5月5日17:11:33