#include <stdio.h>
int main()
{
    char s[100001];
     scanf("%s", s);
     int lenth = strlen(s);
     int count = 0;

     for (int i = 0; i < lenth; i++)
     {
        if (s[i] !='a' && s[i] !='e' && s[i] !='i' && s[i] !='o' && s[i] != 'u')
        {
           count++;
        }
        
     }
     printf("%d", count);
     
    return 0;
}