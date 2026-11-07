#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - count; j++)
        {
            printf(" ");
        }
        for (int i = count; i >= 1; i--)
        {
            printf("%d", i);
        }
        count++;

        printf("\n");
    }

    return 0;
}