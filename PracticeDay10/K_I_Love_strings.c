#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[55], t[55];
        scanf("%s %s", s, t);
        int lenS = strlen(s);
        int lenT = strlen(t);

        int i;
        for (i = 0; i < lenS && i < lenT; i++)
        {
            printf("%c%c", s[i], t[i]);
        }

        if (i < lenS)
        {
            for ( ; i < lenS; i++)
            {
                printf("%c", s[i]);
            }
        }

        if (i < lenT)
        {
            for ( ; i < lenT; i++)
            {
                printf("%c", t[i]);
            }
        }

        printf("\n");
    }

    return 0;
}