#include <stdio.h>

int dist(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count += 1;
                break;
            }
        }
    }
    int ans = n - count;
    printf("%d", ans);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    dist(a, n);

    return 0;
}