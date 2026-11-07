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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}