#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char s[10001];

         scanf("%s", s);

        int capital = 0;
        int small = 0;
        int digit = 0;

        for (int i = 0;  i <  strlen(s); i++)
        {
            if (s[i] >='A' && s[i] <= 'Z')
            {
                capital++;
            }
            // choto letter
            else if (s[i] >='a' && s[i] <= 'z')
            {
                small++;
            }
            // sonkha count
            else if (s[i] >='0'&& s[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital,small, digit);
    }

    return 0;
}
