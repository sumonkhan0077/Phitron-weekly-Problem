#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    int count = 0;
    while (n > 1)
    {
       n = n / 2;
     count++;
    }

    printf("%d", count);

    return 0;
}