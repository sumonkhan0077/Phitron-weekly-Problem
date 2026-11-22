#include <stdio.h>
#include <limits.h>
int rec(int a[], int n)
{
    int max = INT_MIN;

    if (n == 0 - 1)
    {
        return max;
    }

    int boro = rec(a, n - 1);

    if (boro < a[n])
    {
        return max = a[n];
    }
      else
    {
        return boro;
    }

  
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
    int ans = rec(a, n - 1);
    printf("%d ", ans);
    return 0;
}      