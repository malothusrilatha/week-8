#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
{
    int original = num, remainder, sum = 0, digits = 0;
    while (num != 0)
    {
        digits++;
        num /= 10;
    }
    num = original;
    while (num != 0)
    {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }
    return (sum == original);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n))
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
    return 0;
}



