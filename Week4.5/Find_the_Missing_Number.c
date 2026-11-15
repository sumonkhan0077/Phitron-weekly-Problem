#include <stdio.h>

long long int arr[100005][4];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int m = arr[i][0];
        int d = 1;

        for (int j = 1; j < 4; j++)
        {
            d *= arr[i][j];
        }

        if (m % d == 0)
        {
            printf("%d\n", m / d);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}