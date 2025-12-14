#include <stdio.h>
void reverseString(char str[])
{
    int i = 0, j = 0;
    char temp;
    while (str[j] != '\0')
        j++;
    j--;  \
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    reverseString(str);
    printf("Reversed string: %s", str);
    return 0;
}





