#include<stdio.h>
int main()
{
    int n, i;
    printf("������������");
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


//2023��5��5��17:11:33