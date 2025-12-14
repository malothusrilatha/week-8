#include <stdio.h>
int findPosition(char str[], char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return i + 1; 
        i++;
    }
    return -1; 
}
int main()
{
    char str[100], ch;
    int pos;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter character to find: ");
    scanf("%c", &ch);
    pos = findPosition(str, ch);
    if (pos != -1)
        printf("Character '%c' found at position %d", ch, pos);
    else
        printf("Character not found");
    return 0;
}








