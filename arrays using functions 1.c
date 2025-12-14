#include <stdio.h>
void evenOdd(int arr[], int n)
{
	int i;
    printf("Even numbers\n: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\nOdd numbers: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}
int main()
{
    int n, i, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    evenOdd(arr, n);
    return 0;
}


