#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = (n / 2) + 6;

    for (int i = 1; i <= line; i++)
    {

        for (int j = 0; j < line - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}