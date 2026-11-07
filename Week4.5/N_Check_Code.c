#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    char s[a + b + 5];
    scanf("%s", &s);

    int dash = 0;
    int digit = 1;
    for (int i = 0; i < a + b + 1; i++)
    {
        if (i == a)
        {
            if (s[i] == '-')
            {
                dash = 1;
            }
        }
        else
        {
            if (s[i] < '0' || s[i] > '9')
            {
                digit = 0;
            }
        }
    }

    if (dash == 1 & digit == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}