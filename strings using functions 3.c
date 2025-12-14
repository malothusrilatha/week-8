#include <stdio.h>
void upperToLower(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;   
        }
        i++;
    }
}
int main()
{
    char str[100];
    printf("Enter a string in uppercase: ");
    fgets(str, 100, stdin);
    upperToLower(str);
    printf("String in lowercase: %s", str);
    return 0;
}







