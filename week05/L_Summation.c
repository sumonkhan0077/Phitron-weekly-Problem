#include <stdio.h>

void sum(int n, int i, int ans)
{
    if (i == n+1)
    {
         printf("%d ", ans);
        return;
    }

    int in;
    scanf("%d", &in);
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