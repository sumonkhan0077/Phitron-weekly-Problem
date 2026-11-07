#include <stdio.h>

void odd_even()
{
    int n;
    int odd = 0, even = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)

    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    printf("%d %d", odd, even);
}

int main()
{
    odd_even();
    return 0;
}