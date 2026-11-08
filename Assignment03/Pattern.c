#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= star; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int j = 1; j <= star; j++)
            {
                printf("#");
            }
        }

        printf("\n");
        star += 2;
        space--;
    }

    star = n * 2 - 3;
    space = 1;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            if (i % 2 == 0)
            {
                for (int j = 1; j <= star; j++)
                {
                    printf("-");
                }
            }
            else
            {
                for (int j = 1; j <= star; j++)
                {
                    printf("#");
                }
            }

            printf("\n");
            star -= 2;
            space++;
        }
    }
    else{
         for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= star; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= star; j++)
            {
                printf("-");
            }
        }

        printf("\n");
        star -= 2;
        space++;
    }

    }


    return 0;
}