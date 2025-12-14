#include <stdio.h>
int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, i;
    printf("Enter range: ");
    scanf("%d", &n);
    printf("Prime numbers are:\n");
    for (i = 1; i <= n; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}







