#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int poss, valu;
    scanf("%d %d", &poss, &valu);
    
    for (int i = 0; i < n; i++)
    {
        if (poss == i)
        {
             arr[i] = valu;
        }

    }

     for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}