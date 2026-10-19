#include <stdio.h>
int main()
{
    int a, i, p, e;
    scanf("%d %d %d %d", &a, &i, &p, &e);
    if (21 <= a && a <= 35)
    {
        if (80 <= i && i <= 100)
        {
            if (70 <= p && p <= 100)
            {
                if (2 <= e || a >= 30 && i >= 95 && p >= 90 && 1 <= e)
                {

                    printf("Selected");
                }
                else
                {
                    printf("Rejected");
                }
            }
            else
            {
                printf("Rejected");
            }
        }
        else
        {
            printf("Rejected");
        }
    }
    else
    {
        printf("Rejected");
    }

    return 0;
}