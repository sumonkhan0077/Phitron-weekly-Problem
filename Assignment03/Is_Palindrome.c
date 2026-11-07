#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int j = strlen(s) - 1;
     
    for (int i = 0; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0; 
        }   
    }

    return 1; 
}

int main()
{
    char s[10001];

    scanf("%s", s);

    if (is_palindrome(s) == 1)
    {
       printf("Palindrome\n");
    }

    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}