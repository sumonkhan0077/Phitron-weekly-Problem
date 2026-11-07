#include <stdio.h>
int sum(a, b)
{
    int sume = a + b;
    //    printf("%d", sume);
    return sume;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int valu = sum(a, b);
    printf("%d", valu);
    return 0;
}