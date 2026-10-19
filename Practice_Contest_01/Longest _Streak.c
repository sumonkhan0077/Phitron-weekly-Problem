#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int win = 0;
    int most_st =0;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n == 1)
        {
            win += n;
        }
        if (n == 0)
        {
            win = 0;
        }
         if (most_st < win)
         {
           most_st = win;
         }
         
        }
        printf("%d ", most_st);
    

    return 0;
}