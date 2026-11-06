#include <stdio.h>
int main()
{
    int n , t;
    scanf("%d %d", &n, &t);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int fre[100001]={0};
    
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        fre[val]++;
    }
    for (int i = 1; i <= t; i++)
    {
      printf("%d\n", fre[i]);
    }
    

    
    return 0;
}