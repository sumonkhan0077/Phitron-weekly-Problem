#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        char s[105];
        scanf("%s", &s);
        int lenth = strlen(s);
        if (lenth <= 10)
        {
           printf("%s\n", s);
        }
        else{
             printf("%c%d%c\n", s[0],lenth - 2,s[lenth-1]);
        }
    
    }
    
    return 0;
}