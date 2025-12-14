#include <stdio.h>
int trace(int a[10][10], int n)
{
    int i, sum = 0;
    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    return sum;
}
int main()
{
    int a[10][10], i, j, n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int t = trace(a, n);
    printf("Trace of the matrix = %d", t);
    return 0;
}



