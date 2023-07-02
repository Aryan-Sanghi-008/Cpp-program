#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int arr[n][m];
    int arr1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Elements of 1st %d * %d matrix : \n", m, n);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Elements of 2nd %d * %d matrix : \n", m, n);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = 0;
        }
    }
    printf("Sum of elements of 1st and  2nd %d * %d matrix : \n", m, n);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            sum[i][j] += arr1[i][j] + arr[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}