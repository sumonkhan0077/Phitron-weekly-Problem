#include <stdio.h>
void number( int i,int n) {
   if (i == n+1)
   {
    return;
   }
   printf("%d\n", i);
   number(i+1,n);
   
}
int main()
{
    int n;
    scanf("%d", &n);
    number(1,n);
    return 0;
}