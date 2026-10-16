#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int low = INT_MAX;
    int min_idx;
    for (int i = 0; i < n; i++)
    {
        if (low > arr[i])
        {
            low = arr[i];
            min_idx = i+1;
        }
        
    }
    printf("%d %d", low , min_idx);

    return 0;
}