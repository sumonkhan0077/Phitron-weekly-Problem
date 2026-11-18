#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    int stop = 0;
    while (stop == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
            }
            else
            {
                stop = 1;
                break;
            }
        }
        if (stop == 0)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}