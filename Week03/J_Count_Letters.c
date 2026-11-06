#include <stdio.h>


char s[10000001];
int main()
{
    scanf("%s", s);

    int fre[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        fre[s[i] - 'a']++;
        //akahne s[i] == jodi c hoi tobe c == 99 , tahole 99 - 'a'(97)== 2 , 2 no index. 2 no  index a ache c . tahole c ar count 1 barabe.
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        { 
             printf("%c : %d\n", 'a'+i, fre[i]);
        }
        
       
    }
    
    return 0;
}