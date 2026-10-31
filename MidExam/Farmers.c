#include <stdio.h>

int main()
{
    int n;
     scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
         int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int newday = (m1 * d)/ (m1 + m2);


        int result = d - newday;

          printf("%d\n", result);
    }

    return 0;
}
