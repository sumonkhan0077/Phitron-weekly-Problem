#include<stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if ( i % 5 != 0 )
        {
            printf("%d No\n", i);
        }
        else{
            printf("%d Yes\n", i);
        }
    }
    
    
    return 0;
}