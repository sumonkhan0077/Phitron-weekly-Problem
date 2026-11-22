#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }

    long long int max = 0;;
    long long int loopMax = 0;

    for (int i = 0; i < k; i++)
    {
        loopMax = loopMax + a[i];
        if (max < loopMax)
        {
            max = loopMax;
        }
    }

    // for (int i = 0; i < n; i++)
    // {

    //     printf("%d ", a[i]);
    // }

     printf("%lld ",max);
    return 0;
}