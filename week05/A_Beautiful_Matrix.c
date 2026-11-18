#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    int row, clm;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                row =  i;
                clm= j;
            }
            
        }
       
    }
    int result = abs(row - 2) + abs(clm - 2);
     printf("%d", result);
    

    return 0;
}