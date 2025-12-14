#include <stdio.h>
void copyString(char src[], char dest[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';   
}
int main()
{
    char src[100], dest[100];
    printf("Enter a string: ");
    fgets(src, 100, stdin);
    copyString(src, dest);
    printf("Copied string: %s", dest);
    return 0;
}






