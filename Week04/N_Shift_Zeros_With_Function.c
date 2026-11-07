#include <stdio.h>

int shiftZoros(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == 0 && a[j] != 0)
            {
                int tem = a[i];
                a[i] = a[j];
                a[j] = tem;
                break;
                /* code */
            }
        }
    }

    
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     
    shiftZoros(n , a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}