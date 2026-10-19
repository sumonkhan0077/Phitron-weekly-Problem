#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int hig = 0;
     for (int i = 0; i < t ; i++)
     {
        scanf("%d", &n);
        if (n > hig)
        {
            hig = n;
        }
         
       
     }
      printf("%d ", hig);
     
    return 0;
}