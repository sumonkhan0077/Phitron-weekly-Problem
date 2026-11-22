#include <stdio.h>
void number( int i,int n) {
   if (i == n+1)
   {
    return;
   }
   number(i+1,n);
   printf("%d ", i);
   
}
int main()
{
    int n;
    scanf("%d", &n);
    number(2,n);
      printf("1");
    return 0;
}