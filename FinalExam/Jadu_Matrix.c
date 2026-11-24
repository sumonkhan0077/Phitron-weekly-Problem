#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r != c)
    {
        printf("NO\n");
        return 0;
    }


    int primary = 1;
    int secondary = 1;
    int other = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                primary = 0;
                break;
            }
            if (i + j == r - 1 && arr[i][j] != 1)
            {
                secondary  = 0;
                break;
            }
            else if (i != j  && i + j != r - 1 &&  arr[i][j] != 0  )
            {
               other = 0;
               break;
            }
            
        }
    }

    int jadu = primary + secondary + other;
    if (jadu == 3)
    {
       printf("YES");
    }
    else{
        printf("NO");
    }
    
    

    return 0;
}