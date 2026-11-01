#include <stdio.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
   
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            s[i]= ' ';
        }
        else if (s[i] >='A' && s[i] <='Z')
        {
             s[i] +=32;
        }
        else{
             
            s[i] -=32;
        }
        
    }
     printf("%s", s);
    
    return 0;
}