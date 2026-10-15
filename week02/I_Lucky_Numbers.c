#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ft = a / 10;
    int sn= a % 10;
   if (ft == 0 || sn ==0)
   {
    printf("YES");
   }
   else if (ft % sn == 00 || sn % ft == 0)
    {
        printf("YES");
    }
    else{
        printf("NO");

    }
    return 0;
}