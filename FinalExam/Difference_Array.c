#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
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

        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j]=abs(a[j] - b[j]) ;
        }
        
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[j]);
        }
        printf("\n");
    }

    return 0;
}