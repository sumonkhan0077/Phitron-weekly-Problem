#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int i=a;
    int j=b;
    int k=c;

    if (a > b)
    {
        int tem = a;
        a = b;
        b = tem;
    }
    if (a > c)
    {
        int tem = a;
        a = c;
        c = tem;
    }
    if (b > c)
    {
        int tem = b;
        b = c;
        c = tem;
    }
   
    
    
     printf("%d\n%d\n%d\n", a,b, c);
     printf("\n");
     printf("%d\n%d\n%d\n", i,j, k);

    return 0;
}