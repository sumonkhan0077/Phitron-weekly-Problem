#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int l;
        scanf("%d", &l);

        int a[l], b[l];

        for (int i = 0; i < l; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i]; 
        }


        for (int i = 0; i < l - 1; i++)
        {
            for (int j = i + 1; j < l; j++)
            {
                if (b[i] > b[j])
                {
                    int tem = b[i];
                    b[i] = b[j];
                    b[j] = tem;
                }
            }
        }


        for (int i = 0; i < l; i++)
        {
            int ans = abs(a[i] - b[i]); 
            printf("%d ", ans);      
        }
        printf("\n");
    }

    return 0;
}