#include <stdio.h>

void sum(int n, int i, long long ans)
{
    if (i == n+1)
    {
         printf("%lld ", ans);
        return;
    }

    long long in;
    scanf("%lld", &in);
    ans = ans + in;
   
    sum(n, i + 1, ans);
}
int main()
{
    int n;
    scanf("%d", &n);
    sum(n, 1, 0);

    return 0;
}