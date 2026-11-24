#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < 1; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
       
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[j]);
        }
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        for (int k = 0; k < n; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                if (b[k] > b[l])
                {
                    int tem = b[k];
                    b[k] = b[l];
                    b[l] = tem;
                }
            }
        }
         for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[j]);
        }
    }

    return 0;
}