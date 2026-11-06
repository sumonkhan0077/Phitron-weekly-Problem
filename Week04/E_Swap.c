#include <stdio.h>

int swap ( int a, int b) {
    int tep = a;
    a =b;
    b = tep;
    printf("%d %d", a, b);
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    swap(a,b);
    
    return 0;
}