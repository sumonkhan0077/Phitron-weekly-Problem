#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    scanf("%f", &n);
    int star = 1;
    int space = n - 1;
    float h = ceil(n / 2);
    for (int i = 1; i <= n; i++)
    {
        if (i <= h)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }
            printf("\n");
            star += 4;
            space -= 2;
        }

        if (i > h)
        {
            for (int j = i; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = i; j <= star-2; j++)
            {
                printf("*");
            }
            printf("\n");
            star -= 4;
            space += 2;
        }
    }

    return 0;
}