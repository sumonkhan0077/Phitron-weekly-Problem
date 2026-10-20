
#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long int first = 1;
    long long int second = 1;

    for (int i = 1; i <= b; i++)
    {
        first = first * a;
    }

    for (int i = 1; i <= d; i++)
    {
        second = second * c;
    }

    if (first > second)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
