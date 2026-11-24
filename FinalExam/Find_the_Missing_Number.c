#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int mul = a*b*c;
        long long int ans = m /mul;
        if (m % mul != 0)
        {
            printf("-1\n");
        }
        else if (m % mul == 0)
        {
           printf("%lld\n", ans);
        }
        
        
        // printf("%d %d %d %d\n", m, a, b, ans);
    }


    return 0;
}
