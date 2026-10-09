#include<stdio.h>
int main()
{
   int a;
   long long int b;
   scanf("%d %lld" , &a , &b);
   long long int mul = a * b;
   printf("%lld", mul);

   return 0;
}