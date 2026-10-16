#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        sum = sum + ar[i];
    }
    if(sum < 0){
        sum *= -1;
    }
    printf("%lld", sum);
    
    return 0;
}