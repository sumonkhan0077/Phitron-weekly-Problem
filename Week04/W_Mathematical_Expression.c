#include <stdio.h>

int sum (int num1 , int num2, int opa ) {
    
    int ans;
     if (opa == '+')
    {
        ans = num1 + num2;
    }
    else if (opa == '-')
    {
        ans = num1 - num2;
    }
    else if (opa == '*')
    {
        ans = num1 * num2;
    }
    else if (opa == '/')
    {
        ans = num1 / num2;
    }

    return ans;
}
int main()
{
    int a , b, ans;
    char o, s;
    scanf("%d %c %d %c %d", &a,  &o, &b, &s, &ans);
    int valu = sum(a , b, o);
    if (valu == ans)
    {
       printf("Yes");
    }
    else{
         printf("%d", valu);
    }
    
   
        return 0;
}