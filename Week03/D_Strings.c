#include <stdio.h>
int main()
{
    char s[15], t[15];
    scanf("%s %s", &s, &t);
    int len1 = strlen(s);
    int len2 = strlen(t);

    printf("%d %d\n", len1, len2);
    printf("%s%s\n", s, t);

    char temp = s[0];
    s[0] = t[0];
    t[0] = temp;

    printf("%s %s\n", s, t);

    return 0;
}