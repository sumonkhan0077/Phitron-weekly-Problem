// #include <stdio.h>
// int main()
// {
//     long long n;
//     scanf("%lld", &n);

//     int count = 0;
//     while (n > 1)
//     {
//        n = n / 2;
//      count++;
//     }

//     printf("%d", count);

//     return 0;
// }

#include <stdio.h>

void rec(long long int n, int count )
{
    if (n <= 1)
    {
        printf("%d", count);
        return;
    }

    rec(n/2, count+1);
    
}
int main()
{
    long long n;
    scanf("%lld", &n);
    rec(n, 0);
   

    return 0;
}