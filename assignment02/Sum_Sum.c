#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int pas_sum = 0;
    int neg_sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            pas_sum += x;
        }
        else{
            neg_sum += x;
        }

    }
     printf("%d ", pas_sum);
     printf("%d ", neg_sum);
    
    return 0;
}