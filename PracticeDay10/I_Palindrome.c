#include <stdio.h>
int main()
{
    char s[1005];
    scanf("%s", &s);
    
    int len = strlen(s);
    int ans = 0;
    for (int i = 0, j= len-1; i < j; i++,j--)
    {
        if (s[i]!=s[j])
        {
            printf("NO");
            ans +=1;
            break;
        }
        
    }
    if (ans == 0)
    {
        printf("YES");
    }
    
    
    return 0;
}