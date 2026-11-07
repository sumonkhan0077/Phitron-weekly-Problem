#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 0; j < hash; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j < hash; j++)
            {
                printf("-");
            }
        }

        hash += 2;
        space--;
        printf("\n");
    }
    int space2 = 1;
    int hash2 = n * 2 - 4;

    if (n % 2 != 0)
    {
        for (int i = 0; i < n - 1; i++)
        {

            for (int i = 0; i < space2; i++)
            {
                printf(" ");
            }

            if (n % 2 == 0)
            {
            }
            if (i % 2 != 0)
            {
                for (int i = 0; i <= hash2; i++)
                {
                    printf("#");
                }
            }
            else
            {
                for (int i = 0; i <= hash2; i++)
                {
                    printf("-");
                }
            }

            hash2 = hash2 - 2;
            space2++;

            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {

            for (int i = 0; i < space2; i++)
            {
                printf(" ");
            }

       
            if (i % 2 == 0)
            {
                for (int i = 0; i <= hash2; i++)
                {
                    printf("#");
                }
            }
            else
            {
                for (int i = 0; i <= hash2; i++)
                {
                    printf("-");
                }
            }

            hash2 = hash2 - 2;
            space2++;

            printf("\n");
        }
    }

    return 0;
}